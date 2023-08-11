"""
Website: AtCoder
Link: https://atcoder.jp/contests/abc048/tasks/abc048_b?lang=en
"""
a,b,x=map(int,input().split())
if x==1:print(b-a+1)
else:print((b//x)-(a-1)//x)