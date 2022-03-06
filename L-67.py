a,s,d=map(eval,input().split())
if s==0:
    k=2.455*a
else:
    k=1.26*a
    
print("%.2f"%k,end=' ')
if k<d:
    print('^_^')
else:
    print('T_T')