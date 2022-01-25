
io=input()
le=len(io)
l=[1.0,1.0]
if io[0]=='-':
    l[0]=1.5
    le-=1
t=int(io[-1])

if t%2==0:
    l[1]=2.0
    
n=0
for i in io:
    if i=='2':
        n+=1
n=n*l[0]*l[1]*100/le
print('%.2f'%n,'%',sep='')
