"""
Website: Atcoder
Link: https://atcoder.jp/contests/abc088/tasks/abc088_a?lang=en
"""
from math import floor
x=int(input())
y=int(input())
z=floor(x/500)
if((500*z+y)>=x):
    print("Yes")
else:
    print("No")