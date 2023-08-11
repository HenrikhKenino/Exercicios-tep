"""
Website: Codeforces
Link: https://codeforces.com/problemset/problem/1475/A
"""
x=int(input())
for i in range(x):
    z=int(input())
    k=(bin(z)[2:])
    if k.count("1")>1 :
        print("YES")
    else: print("NO")
    