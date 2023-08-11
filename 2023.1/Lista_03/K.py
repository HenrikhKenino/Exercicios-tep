"""
Website: Online Judge
Link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2126
"""
x = int(input())
p=x
while x>=0:
    y=""
    while x>=1: 
        r = int(x%3)
        x = int(x/3)
        y =  str(r) + y
    if p==0: 
        print(0)
    else: 
        print(y)
    x = int(input())
    p=x
    