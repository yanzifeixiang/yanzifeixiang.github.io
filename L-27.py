
io=input()
p=[]
for i in io:
    x=int(i)
    if x in p:
        pass
    else:
        p.append(x)
p.sort(reverse=True)
x=0
print('int[] arr = new int[]{',end='')
for i in p:
    x+=1
    if x==1:
        print(i,end='')
    else:
        print(',',i,sep='',end='')
print('};')
k=[]
for i in io:
    x=int(i)
    h=p.index(x)
    k.append(h)
x=0
print('int[] index = new int[]{',end='')
for i in k:
    x+=1
    if x==1:
        print(i,end='')
    else:
        print(',',i,sep='',end='')
print('};')