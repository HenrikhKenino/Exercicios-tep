"""
Website: AtCoder
Link: https://atcoder.jp/contests/abc145/tasks/abc145_b?lang=en
"""
x=int(input())
s=input()
if s[:x//2]==s[x//2:]: print("Yes")
else: print("No")