
a,b=map(int,input().split())
n=int(input())
l=[]
t=[]
A=a
B=b
for i in range(n):
    li=list(map(int,input().split()))
    l.append(li)
    t.append(li[0]+li[2])
for i in range(n):
    if t[i]==l[i][1] and t[i]!=l[i][3]:
        a-=1
        if a==-1:
            print('A')
            print(B-b)
            break
    elif t[i]!=l[i][1] and t[i]==l[i][3]:
        b-=1
        if b==-1:
            print('B')
            print(A-a)
            break    
