import requests
import argparse
import json
from pdb import set_trace as stx

parser = argparse.ArgumentParser(description = "API Parsing NASA")
parser.add_argument("--api_key", default='tE7XQGpjRshsrizdjGXLqcGimd2m4u301zcbh4Sx', type=str, help="API Key")
parser.add_argument("--earth_date", default='2015-06-03', type=str, help="Date in YYYY-MM-DD")
parser.add_argument("--rover_id",default='5', type=int, help="Image id")
args = parser.parse_args()

earth_date = args.earth_date
api_key = args.api_key
rover_id = args.rover_id

api_url = f"https://api.nasa.gov/mars-photos/api/v1/rovers/curiosity/photos?earth_date={earth_date}&api_key={api_key}"

request = requests.get(api_url)
parsed_request = json.loads(request.text)

images_saved = 0
if 'error' in parsed_request:
    print(parsed_request['error'])
else:
    for photo in parsed_request['photos']:
        if rover_id == photo['rover']['id']:
            save_flag = True
            print("Saving Image")
            photo_url = photo['img_src']
            photo_request = requests.get(photo_url)
            photo_path = open(f"download_{images_saved+1}.png", "wb")
            photo_path.write(photo_request.content)
            photo_path.close()            
            images_saved += 1

if not images_saved:
    print("image not found")
