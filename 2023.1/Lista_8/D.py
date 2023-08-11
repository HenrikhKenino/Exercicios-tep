"""
Website: Codeforces
Link: https://codeforces.com/problemset/problem/124/A
"""
a,b,c = map(int,input().split())
if(b+c<a and c!=0):
    print((a-(a-b-c))-b+1)

else: print(a-b)