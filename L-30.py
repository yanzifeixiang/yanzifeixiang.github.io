
io=int(input())
d=[]
n=[]
p=[]
for i in range(io):
    x=input().split()
    d.append(x[1])
    if int(x[0])==0:
        p.append(x[1])
    else:
        n.append(x[1])
for i in range(io//2):
    print(d[i],'',end='')
    if d[i] in n:
        n.remove(d[i])
        print(p.pop())
    else:
        p.remove(d[i])
        print(n.pop())
