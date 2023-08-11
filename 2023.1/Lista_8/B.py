"""
Website: Atcoder
Link: https://atcoder.jp/contests/abc167/tasks/abc167_b?lang=en
"""
a,b,c,d = map(int,input().split())
if(a>=d): print(d)
elif((d-a-b)<=0): print(a)
elif a >0 : print(a-(d-a-b)) 
else: print(-d)
    