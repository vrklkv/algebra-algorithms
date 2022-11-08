import random
import math
import decimal

def choose():
    flag=[]
    print("p[0]="+str(p[0]))
    flag.append(1)
    for i in range (1,31):
        flag.append(0)
    i=1
    while i<=k-1:
        j=random.randint(0,30)
        if flag[j]==0:
            p.append(prime128[j])
            flag[j]=1
            print("p["+str(i)+"]="+str(p[i]))
            i+=1

x=2**123
y=2**128
t=0
prime128=[2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127]
k=random.randint(0,15)+5
print("k="+str(k))
p=[]
p.append(2)
choose()
    
n=1
for i in range (0,k):
    n*=p[i]
while n<x-1:
    i=random.randint(0,k-1)
    n*=p[i]
n=n+1
print("n="+str(n))
L=int(math.log2(n))
for a in range (2,L+1):
    for i in range (0,k):
        if pow(a,int((n-1)/p[i]),n)!=1 and pow(a,int(n-1),n)==1:
            printf("prime")
            t=1       
if t==0:
    print("composite")