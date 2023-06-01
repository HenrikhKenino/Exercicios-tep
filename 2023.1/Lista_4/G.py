from math import log10,pi,e,ceil,sqrt
x = int(input())
for i in range(0,x):
    N = int(input())
    print(ceil(log10(sqrt(2*pi*N)*pow((N/e),N))))       #Formula de Stiriling