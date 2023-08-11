"""
Website: Codeforces
Link: https://codeforces.com/problemset/problem/1204/B
"""
x,y,z = map(int,input().split())
l=[1 for i in range(x)]
for i in range(1,y):
    k=2**i
    l[i]=k

sasuke = sum(l)
k=0
j=0
for i in range(1,z):
    k=2**i
    l[i]=k
    j=i
if z<x and z!=1:
    for ui in range(j,x):
        l[ui]=k
            

naruto = sum(l)

print(sasuke, naruto)

    