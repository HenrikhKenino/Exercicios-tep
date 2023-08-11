"""
Website: Codeforces
Link: https://codeforces.com/problemset/problem/258/A
"""
x = input()  
for i in range(0,len(x)):
    if x[i] == "0":
        print(x[:i],end="")
        print(x[i+1:])
        break
if x.count("0") == 0:
    print(x[:len(x)-1])