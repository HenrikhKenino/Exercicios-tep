"""
Website: Codeforces
Link: https://codeforces.com/problemset/problem/1204/A
"""
h=input()
if len(h)>15 and h.count("1")==2:
    s=int(h,2)
    z=0
    while s>1:
        s/=4
        z+=1
    print(z+1)
else:
    s=int(h,2)
    z=0
    while s>1:
        s/=4
        z+=1

    print(z)

    