
co=list(input())
di={}
for i in co:
    if i not in di:
        di[i]=1
    else:
        di[i]+=1
k=sorted(di.keys())
for i in k:
    print(i,':',di[i],sep='')
