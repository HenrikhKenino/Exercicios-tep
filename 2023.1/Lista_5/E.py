from math import gcd
x = int(input())
for _ in range(x):
    l = input().split()
    vl = [int(i) for i in l]
    x=0
    for i in range(0,len(vl)): 
        for j in range(i+1,len(vl)):
            a = gcd(vl[i],vl[j])
            if a>x:
                x=a
    print(x)

    
    