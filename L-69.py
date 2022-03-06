li=list(map(int,input().split()))


d=0
c=0
dd=[]
cc=[]

for i in range(4):
    if li[i]<li[4]:
        d+=1
        dd.append(i)

for i in range(4):
    for j in range(i,4):
        if abs(li[i]-li[j])>li[5]:
            x=min([li[i],li[j]])
            cc.append(li.index(x))
cc=set(cc)
c=len(cc)
cc=list(cc)
print(cc)
if c+d==0:
    print('Normal')
elif c+d==1:
    if c==1:
        t=cc
    else:
        t=dd
    print('Warning: please check #%d!'%(t[0]+1))
else:
    print('Warning: please check all the tires!')