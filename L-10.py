a,b,c=map(int,input().split(' '))
m=max(a,b,c)
M=min(a,b,c)
f=a+b+c-m-M
print('%d->%d->%d'%(M,f,m))
