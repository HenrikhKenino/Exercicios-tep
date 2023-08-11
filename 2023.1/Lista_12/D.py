"""
Website: AtCoder
Link: https://atcoder.jp/contests/abc149/tasks/abc149_b?lang=en
"""
a,b,y=map(int,input().split())
z=a-y
if z<0:
    b+=z
    if b<0:
        print(0,0)
    else: print(0,b)
else: print(z,b)
    
