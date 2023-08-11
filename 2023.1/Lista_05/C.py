"""
Website: UVA
Link: https://vjudge.net/problem/UVA-10407
"""

from math import gcd
while True:
    x=list(map(int,input().split()))
    if x[0]==0: break
    b = [0]*(len(x)-1)
    for i in range(1, len(x)-1):
        b[i]=x[i-1]-x[i]
    print(gcd(*b))
        