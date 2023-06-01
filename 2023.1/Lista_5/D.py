from math import lcm
while True:
    x=int(input())
    if x==0: break
    cout=0
    if x%2==0 and x!=2: cout+=2
    if(lcm(int(x/3),int(x/2))==x):
        cout+=2
        if(lcm(int(x/3),int(x/4))==x):
            cout+=2
            
    if x==1: print(x,1)
    else:print(x,cout+2)



#print(lcm(n,n))
#print(lcm(n,1))

#print(lcm(6,2))
#print(lcm(6,3))
#12,2
#12,3-
#12,4-
#12,6-


#print(lcm(3,2))
#3,4-
#4,6-

