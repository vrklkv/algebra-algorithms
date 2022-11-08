import random
import math

def factorial(n):
    ans=1
    for i in range(1, n+1):
        ans*=i
    return ans

n=int(input())
N=int(input())
t=0
a=1
while a<n:
    k=random.randint(0,N)
    f=factorial(k)
    b=pow(a,f)-1
    b=b%n
    if math.gcd(b,n)!=1 and math.gcd(b,n)!=n:
        t=1
        a=n
        print(b)
    a+=1
if t==0:
    print(1)