"""
Website: AtCoder
Link: https://atcoder.jp/contests/abc146/tasks/abc146_b?lang=en
"""
x=int(input())
s=input()
z=""
for i in s:
    k = (ord(i)+x)
    if k>90:
        k-=26
    z+=chr(k)
print(z)
