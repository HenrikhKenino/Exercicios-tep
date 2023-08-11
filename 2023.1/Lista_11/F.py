"""
Website: Codeforces
Link: https://codeforces.com/problemset/problem/758/A
"""
x=int(input())
y = list(map(int,input().split(" ")))
z=max(y)
k=0
for i in y:
    k+=z-i
print(k)