

num=int(input())

lis1=[]
lis2=[]
m=0
for i in range(num):
    lis=[]
    lis=input().split()
    lis[1]=int(lis[1])
    lis1.append(lis[0])
    lis2.append(lis[1])
    m+=lis[1]
m=int((m/num)//2)

li=[]
for i in range(num):
    li.append((lis2[i]-m)**2)
l=sorted(li)[0]
f=li.index(l)
print(m,lis1[f])
