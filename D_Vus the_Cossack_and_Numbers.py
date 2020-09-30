from math import floor , ceil
n = int(input())
r=[]
q=[]
s=0
for i in range(n):
    p = float(input())
    q.append(p)
    if p<0:
        x = floor(p)
        s+=x
        r.append(x)
    else:
        x = ceil(p)
        s+=x
        r.append(x)
for i in range(n):
    if s>0 and r[i]>q[i]:
        print(r[i]-1)
        s-=1
    elif s<0 and r[i]<q[i]:
        print(r[i]+1)
        s+=1
    else:
        print(r[i])
