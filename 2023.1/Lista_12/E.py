"""
Website: Codeforces
Link: https://codeforces.com/problemset/problem/92/A
"""
x,t=map(int,input().split())
k=0
while True:
    for i in range(1,x+1):
        t-=i
        if(t<0):
            t+=i
            print(t)
            k+=1
            break
    if(k!=0): break