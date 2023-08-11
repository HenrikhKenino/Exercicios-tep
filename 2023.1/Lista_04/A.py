"""
Website: AtCoder
Link: https://atcoder.jp/contests/abc097/tasks/abc097_b?lang=en
"""
from math import sqrt
x = int(input())
if x ==1:
    print(1)
else:
    h=0
    for i in range(int(round(sqrt(x))),0,-1):
        for j in range(2,x):
            z=i**j
            if z > x:
                break 
            if z>h:
                h=z
    print(h)