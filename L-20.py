#----------------------------------------------------------------------------------部分正确-----------------------------------------------------------

n=int(input())
l=[]
for i in range(n):
    num=list(map(int,input().split()))
    num=num[1:]
    l.append(num)
num=int(input())
lis=list(map(int,input().split()))
'''
pp=set(lis)
for i in lis[:]:
    if i in pp:
        pp.remove(i)
    else:
        lis.remove(i)
'''
count=0
p=[]
for i in lis:
    f=0
    for j in l:
        if ((i in j) and (len(j)>1)):
            f=1
            break
    if (f==0 and (i not in p)):
        count+=1
        p.append(i)
        if count==1:
            print(i,end='')
        else:
            print('',i,end='')
if count==0:
    print('No one is handsome',end='')
print()