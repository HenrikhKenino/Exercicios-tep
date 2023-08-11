"""
Website: Codeforces
Link: https://codeforces.com/problemset/problem/1409/A
"""
from math import ceil
x=int(input())
for i in range(x):
    z,a=map(int,input().split())
    if z>a:
        print(ceil((z-a)/10))
    else:
        print(ceil((a-z)/10))