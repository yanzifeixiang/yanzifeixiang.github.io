
num=int(input())

sy=input()

lis=[]
li=[]
n=0
for i in sy:
    if n%num==0 and n!=0:
        lis.append(li)
        li=[]
    li.append(i)
    n+=1

lis.append(li)
l=len(lis[-1])
if l<num:
    for  i in range(num-l):
        lis[-1].append(' ')

l=len(lis)
for i in range(num):
    for j in range(l):
        print(lis[-1-j][i],end='')
    print()