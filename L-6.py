#-------------------------------------------------这个答案有问题--------------------
f=1
l=[]
n=int(input())
for i in range(2,n//2+2):
    if n%i==0:
        l.append(i)
lp=len(l)
ll=dict({})
ll.update({l[0]:1})
for i in range(1,lp):
    if l[i-1]+1==l[i]:
        f+=1
        ll.update({l[i]:f})
    else :
        f=1
        ll.update({l[i]:f})
v=sorted(ll.values())
k=sorted(ll.keys())
print(v[-1])
f=1
for i in k:
    if ll[i]==v[-1]:
        for j in range(v[-1]):
            if j+1==v[-1]:
                print(i)
            else:
                print(i-v[-1]+j+1,'*',sep='',end='')
        f=0
        break
    
if f==1:
    print(1)
    print(n)