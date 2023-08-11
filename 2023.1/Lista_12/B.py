"""
Website: AtCoder
Link: https://atcoder.jp/contests/abc147/tasks/abc147_b?lang=en
"""
from math import ceil
s=input()
h=0
for i in range(len(s)-1):
    if s[i]!=s[len(s)-i-1]:
        h+=1
if h>0: print(ceil(h/2))
else: print(0)