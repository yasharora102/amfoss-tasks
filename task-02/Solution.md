# Solution
#### Commands Used 
- __cd__ - to move between the directories
- **mkdir** - to create directories
- **ls** - to list the files
- __touch__ - to create the files
- __nano__ - to edit the files
- __cat__ - to merge the files and look into their contents
- __mv__ - to move and rename the files

#### Approach

The task was quite entertaining and fun to do. A simple Google search provided the answers to the complex questions (finding age of senators,cribbage,largest even number,etc.). 

#### Execution
 Carried out the task step by step creating directories & files one-by-one with __mkdir__ and __touch__. 
 Used __nano__ for editing the files, typing in the numbers to the questions as instructed.
 After creating all 3 files for a particular direction, used __cat__ to merge them by:
 ```sh
cat file1.txt file2.txt file3.txt > East/North.txt
```
Used __mv__ to rename and move the files.
Used __nano__ again to edit the final files according to __DMS__ format.
After editing, put the final coordinates in __Google Maps__ and __voila!__, the destination was reached.
#### Detailed Execution


__1__ - Create a directory and name it ```Coordinates-Location``` and go into that directory.
```sh
mkdir Coordinates-Location
cd Coordinates-Location/
```
__2__ - Create a Directory called ```North``` and go into it.
```sh
mkdir North
cd North/
```
2.1 - Create a file called ```NDegree.txt```
```sh
touch NDegree.txt
```
   * __a.__ Find the discriminant of 2x^2-5x+2=0? __->__  __9__ 
   *  **b.** Add a degree(°) symbol to ***(a)*** (**Eg:** x°). __->__ __9°__ 
   *  **c.** Now store the value of ***(b)*** in ```NDegree.txt```. __->__ ```nano NDegree.txt```

2.2 - Create a file called ```NMinutes.txt``` 
```sh
touch NMinutes.txt
```
* **a.** What is the only prime number to end with the digit 5? __->__ __5__
* **b.** Add single quote(‘) to ***(a)*** (**Eg:** y’). __->__ __5'__
* **c.** Now store the value of ***(b)*** in ```NMinutes.txt```. __->__ ```nano NMinutes.txt```

2.3 - Create a file called ```NSeconds.txt```
- **a.** what is the largest even number that can not be written as the sum of two odd composite numbers? __->__ __38__
- **b.** Add “0.1” value to the value of ***(a)***. __->__ __38.1__
- **c.** Add Double quote(“) to ***(b)*** (**Eg:** Z’’). __->__ __38.1"__
- **d.** Now store the value of ***(c)*** in ```NSeconds.txt```. __->__ ```nano NSeconds.txt```

2.4 - Make a file ```NorthCoordinate.txt``` formed from the combination of the files
```sh
cat NDegree.txt NMinutes.txt NSeconds.txt > NorthCoordinate.txt
```
2.5 - Copy the ```NorthCoordinate.txt``` to the ```Coordinate-Location``` directory and rename it as ```North.txt```
```sh
mv NorthCoordinate.txt ../
cd ..
mv NorthCoordinate.txt North.txt
```
__3__ - Go to the ```Coordinates-Location``` directory.
```sh
cd Coordinates-Location/
```
__4__ - Create a Directory called ```East``` and go into it.
```sh
mkdir East
cd East/
```
4.1 -  Create a file called ```EDegree.txt``` 
```sh
touch EDegree.txt
```   
    
- **a.** what is the atomic number of Osmium? __->__ __76__
- **b.** Add a degree(°) symbol to ***(a)*** (**Eg:** x°). __->__ __76°__
- **c.** Now store the value of ***(b)*** in ```EDegree.txt```. __->__ ```nano EDegree.txt```

4.2 - Create a file called ```EMinutes.txt``` 
```sh
touch EMinutes.txt
```
* **a.** What is the highest score in a hand of cribbage game? __->__ __29__
* **b.** Add single quote(‘) to ***(a)*** (**Eg:** y’). __->__ __29'__
* **c.** Now store the value of ***(b)*** in ```EMinutes.txt```. __->__ ```nano EMinutes.txt```

4.3 - Create a file called ```ESeconds.txt```
- **a.** What is the minimum age for united states senators? __->__ __30__
- **b.** Add “0.8” value to the value of ***(a)***. __->__ __30.8__
- **c.** Add Double quote(“) to ***(b)*** (**Eg:** Z’’). __->__ __30.8"__
- **d.** Now store the value of ***(c)*** in ```ESeconds.txt```. __->__ ```nano ESeconds.txt```

4.4 - Make a file ```EastCoordinate.txt``` formed from the combination of the files
```sh
cat EDegree.txt EMinutes.txt ESeconds.txt > EastCoordinate.txt
```
4.5 - Copy the ```EastCoordinate.txt``` to the ```Coordinate-Location``` directory and rename it as ```East.txt```
```sh
mv EastCoordinate.txt ../
cd ..
mv EastCoordinate.txt East.txt
```
__5__ - Make a file called ```Location-Coordinate.txt``` formed from the combination of ```North.txt``` and ```East.txt```
```sh
cat North.txt East.txt > Location-Coordinate.txt
```
# Screenshot
<img src = "# Solution
#### Commands Used 
- __cd__ - to move between the directories
- **mkdir** - to create directories
- **ls** - to list the files
- __touch__ - to create the files
- __nano__ - to edit the files
- __cat__ - to merge the files and look into their contents
- __mv__ - to move and rename the files

#### Approach

The task was quite entertaining and fun to do. A simple Google search provided the answers to the complex questions (finding age of senators,cribbage,largest even number,etc.). 

#### Execution
 Carried out the task step by step creating directories & files one-by-one with __mkdir__ and __touch__. 
 Used __nano__ for editing the files, typing in the numbers to the questions as instructed.
 After creating all 3 files for a particular direction, used __cat__ to merge them by:
 ```sh
cat file1.txt file2.txt file3.txt > East/North.txt
```
Used __mv__ to rename and move the files.
Used __nano__ again to edit the final files according to __DMS__ format.
After editing, put the final coordinates in __Google Maps__ and __voila!__, the destination was reached.
#### Detailed Execution


__1__ - Create a directory and name it ```Coordinates-Location``` and go into that directory.
```sh
mkdir Coordinates-Location
cd Coordinates-Location/
```
__2__ - Create a Directory called ```North``` and go into it.
```sh
mkdir North
cd North/
```
2.1 - Create a file called ```NDegree.txt```
```sh
touch NDegree.txt
```
   * __a.__ Find the discriminant of 2x^2-5x+2=0? __->__  __9__ 
   *  **b.** Add a degree(°) symbol to ***(a)*** (**Eg:** x°). __->__ __9°__ 
   *  **c.** Now store the value of ***(b)*** in ```NDegree.txt```. __->__ ```nano NDegree.txt```

2.2 - Create a file called ```NMinutes.txt``` 
```sh
touch NMinutes.txt
```
* **a.** What is the only prime number to end with the digit 5? __->__ __5__
* **b.** Add single quote(‘) to ***(a)*** (**Eg:** y’). __->__ __5'__
* **c.** Now store the value of ***(b)*** in ```NMinutes.txt```. __->__ ```nano NMinutes.txt```

2.3 - Create a file called ```NSeconds.txt```
- **a.** what is the largest even number that can not be written as the sum of two odd composite numbers? __->__ __38__
- **b.** Add “0.1” value to the value of ***(a)***. __->__ __38.1__
- **c.** Add Double quote(“) to ***(b)*** (**Eg:** Z’’). __->__ __38.1"__
- **d.** Now store the value of ***(c)*** in ```NSeconds.txt```. __->__ ```nano NSeconds.txt```

2.4 - Make a file ```NorthCoordinate.txt``` formed from the combination of the files
```sh
cat NDegree.txt NMinutes.txt NSeconds.txt > NorthCoordinate.txt
```
2.5 - Copy the ```NorthCoordinate.txt``` to the ```Coordinate-Location``` directory and rename it as ```North.txt```
```sh
mv NorthCoordinate.txt ../
cd ..
mv NorthCoordinate.txt North.txt
```
__3__ - Go to the ```Coordinates-Location``` directory.
```sh
cd Coordinates-Location/
```
__4__ - Create a Directory called ```East``` and go into it.
```sh
mkdir East
cd East/
```
4.1 -  Create a file called ```EDegree.txt``` 
```sh
touch EDegree.txt
```   
    
- **a.** what is the atomic number of Osmium? __->__ __76__
- **b.** Add a degree(°) symbol to ***(a)*** (**Eg:** x°). __->__ __76°__
- **c.** Now store the value of ***(b)*** in ```EDegree.txt```. __->__ ```nano EDegree.txt```

4.2 - Create a file called ```EMinutes.txt``` 
```sh
touch EMinutes.txt
```
* **a.** What is the highest score in a hand of cribbage game? __->__ __29__
* **b.** Add single quote(‘) to ***(a)*** (**Eg:** y’). __->__ __29'__
* **c.** Now store the value of ***(b)*** in ```EMinutes.txt```. __->__ ```nano EMinutes.txt```

4.3 - Create a file called ```ESeconds.txt```
- **a.** What is the minimum age for united states senators? __->__ __30__
- **b.** Add “0.8” value to the value of ***(a)***. __->__ __30.8__
- **c.** Add Double quote(“) to ***(b)*** (**Eg:** Z’’). __->__ __30.8"__
- **d.** Now store the value of ***(c)*** in ```ESeconds.txt```. __->__ ```nano ESeconds.txt```

4.4 - Make a file ```EastCoordinate.txt``` formed from the combination of the files
```sh
cat EDegree.txt EMinutes.txt ESeconds.txt > EastCoordinate.txt
```
4.5 - Copy the ```EastCoordinate.txt``` to the ```Coordinate-Location``` directory and rename it as ```East.txt```
```sh
mv EastCoordinate.txt ../
cd ..
mv EastCoordinate.txt East.txt
```
__5__ - Make a file called ```Location-Coordinate.txt``` formed from the combination of ```North.txt``` and ```East.txt```
```sh
cat North.txt East.txt > Location-Coordinate.txt
```
# Screenshot
<img src = "https://dl.dropboxusercontent.com/s/npo3ig0pp2j73xz/task-02-map.png?dl=0">


# Git Commands

- git add.
- git commit
- git push








