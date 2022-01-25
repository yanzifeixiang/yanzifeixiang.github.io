
al=int(input())
li=[]
for i in range(al):
    p=input()
    li.append(p)
co=int(input())
k=input()
k=k.split()
for i in k:
    for j in li:
        qp=j.split()
        if i==qp[1]:
            print(qp[0],qp[2])
            break