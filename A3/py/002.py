import math
n=int(input())
sq=int(math.sqrt(n))
if sq*sq==n:
    sq-=1
if sq%2==0:
    if n%2==0:
        res=sq*2-1
    else:
        res=sq*2
else:
    if n%2==0:
        res=sq*2
    else:
        res=sq*2-1
print(res)