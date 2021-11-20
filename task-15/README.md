Could only attempt **1** question due to time constraints got a score of **60.00** with 2 test cases showing **Runtime Error**.


```python
t = int(input()) 
for i in range(t):
    N=int(input())  
    lst=[]
    for x in range(1,N):
        if x%3==0 or x%5==0:
            lst.append(x)
    a =set(lst)
    print(sum(a))
```
