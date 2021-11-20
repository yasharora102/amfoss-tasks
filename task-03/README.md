# HackerRank Username 
## yasharora102

<h4>Lisa and Shelves</h4>

```python
n=int(input())
lst=[]
def factors(n):
    for i in range(1,int(n**0.5) + 1): #no factors above a square root
        if n % i == 0:
            lst.append(i)
            lst.append(int(n/i)) #printing from both directions simultaneously to reduce workload
    print(len(set(lst))) #using set deletes duplicate values
factors(n)
```
<h4>Aver Max</h4>

```python
t = int(input())
for i in range(t):
    n,k = map(int, input().split())
    number_list = list(map(float,input().split()))
    absolute_list =  [abs(x) for x in number_list]
    max_value = max(absolute_list)
    if k > 0:
        print(max_value)
    else:
        print(max(number_list))
```
<h4>Bumper Cars</h4>

```python
num_cars, bridge_length = map(int,input().split())
position  = list(map(int,input().split()))
direction = list(map(int,input().split()))

position_with_direction = []
for p,d in zip(position,direction):
    position_with_direction.append(p*d)    
    
time_to_complete = 0
for pos in position_with_direction:
    if pos==0:
        time_to_complete = bridge_length
        
    elif pos<0:
        time_to_complete = max(time_to_complete , -pos)
    elif pos>0:
        time_to_complete = max(time_to_complete , bridge_length-pos+1)
print(time_to_complete)
```
<h4>Building Towers 1</h4>

```python
from collections import Counter
n = int(input())

lst= list(map(int, input().split()))
if len(lst)==n:
    tmp_dict = Counter(lst)
    
    print(max(tmp_dict.values()),end=" ")
    print(len(tmp_dict.values()))
```
<h4>The game I must lose - 4 test cases failing ❌</h4>

```python

n,m = map(int,input().split())
def check(m):
    lst = []
    for i in range(1,m+1,2):
        lst.append(i)
        
    print(len(lst))
    
    print(*lst)
if n>=m:
    print(0)
else:    
    if n%2==0:
        check(m)
    elif n%2!=0:
        print(0)
```
