
num=input()
lis=[]
for i in range(int(num)):
    l=list(map(int,input().split()))
    l=l[1:]
    lis.extend(l)
d={}

for i in lis:
    if i in d:
        d[i]+=1
    else:
        d[i]=1
k=d.keys()
it=d.values()
it=sorted(it,reverse=True)
if it.count(it[0])==1:
    t=0
    for i in k:
        if d[i]==it[0]:
            t=i
            break
    print(t,it[0])
else:
    li=[]
    for i in k:
        if d[i]==it[0]:
            li.append(i)
    li.sort()
    print(li[-1],d[li[-1]])
