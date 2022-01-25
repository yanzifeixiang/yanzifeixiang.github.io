
def fun(a,b):
    f=a%b
    while f:
        a=b
        b=f
        f=a%b
    return b
num=int(input())

l=input().split()
fz=[]
fm=[]
z=0
m=1
for i in l:
    d=i.split('/')
    fz.append(int(d[0]))
    fm.append(int(d[-1]))
    m*= int(d[-1])
for i in range(num):
    p=m
    p/=fm[i]
    p*=fz[i]
    z+=p
if z==0:
    prinnt(0)
else:
    x=z//m
    z=z%m
    if z==0:
        print('%d'%x)
    else:
        
        while 1:
            t=fun(z,m)
            if t<=1:
                break
            z/=t
            m/=t
        if x==0:
            print('%d/%d'%(z,m))
        else:
            print(f'%d %d/%d'%(x,z,m))
