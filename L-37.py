
a,b=map(int,input().split())

if  b==0:
    print(f'{a}/0=Error')
elif b<0:
    print('%d/(%d)=%.2f'%(a,b,a/b))
else:
    print('%d/%d=%.2f'%(a,b,a/b))
 