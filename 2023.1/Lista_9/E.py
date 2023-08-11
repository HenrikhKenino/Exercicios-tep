"""
Website: Codeforces
Link: https://codeforces.com/problemset/problem/678/D
"""
a,b,n,x = map(int, input().split())
mod = 10**9+7
if a==1:
    print((x+n*b)%mod)
else:
    print((pow(a,n,mod)*x+b*(pow(a,n,mod)-1)*pow(a-1,mod-2,mod))%mod)