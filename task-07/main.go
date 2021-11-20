package main

import (
	"encoding/csv"
	"encoding/json"
	"log"
	"os"

	"github.com/PuerkitoBio/goquery"
	"github.com/geziyor/geziyor"
	"github.com/geziyor/geziyor/client"
	"github.com/geziyor/geziyor/export"
)

type Billionare struct {
	// 1. Create a new struct for storing read JSON objects
	Name     string `json:"Name"`
	Age      string `json:"Age"`
	Country  string `json:"Country"`
	Networth string `json:"Networth"`
	Source   string `json:"Source"`
}

func convertJSONToCSV(source, destination string) error {
	// 2. Read the JSON file into the struct array
	sourceFile, err := os.Open(source)
	if err != nil {
		return err
	}
	// remember to close the file at the end of the function
	defer sourceFile.Close()

	var ranking []Billionare
	if err := json.NewDecoder(sourceFile).Decode(&ranking); err != nil {
		return err
	}

	// 3. Create a new file to store CSV data
	outputFile, err := os.Create(destination)
	if err != nil {
		return err
	}
	defer outputFile.Close()

	// 4. Write the header of the CSV file and the successive rows by iterating through the JSON struct array
	writer := csv.NewWriter(outputFile)
	defer writer.Flush()

	header := []string{"Name", "Age", "Country", "Networth", "Source"}
	if err := writer.Write(header); err != nil {
		return err
	}

	for _, r := range ranking {
		var csvRow []string
		csvRow = append(csvRow, r.Name, r.Age, r.Country, r.Networth, r.Source)
		if err := writer.Write(csvRow); err != nil {
			return err
		}
	}
	return nil
}

func main() {

	geziyor.NewGeziyor(&geziyor.Options{
		StartRequestsFunc: func(g *geziyor.Geziyor) {
			g.GetRendered("https://www.forbes.com/real-time-billionaires/#7d7f94453d78", g.Opt.ParseFunc)
		},
		ParseFunc: func(g *geziyor.Geziyor, r *client.Response) {
			r.HTMLDoc.Find("tr.base.ng-scope").Each(func(_ int, s *goquery.Selection) {
				g.Exports <- map[string]interface{}{
					"Country":  s.Find("td.Country\\/Territory").Text(),
					"Name":     s.Find("td.name").Text(),
					"Networth": s.Find("td.Net.Worth").Text(),
					"Age":      s.Find("td.age").Text(),
					"Source":   s.Find("td.source").Text(),
				}
			})
		},
		Exporters: []export.Exporter{&export.CSV{}},
	}).Start()
	if err := convertJSONToCSV("out.json", "billion.csv"); err != nil {
		log.Fatal(err)
	}
}
