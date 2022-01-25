
t=['G','P','L','T']
p=[0,0,0,0]
io=input()
for i in io:
    if i in 'Gg':
        p[0]+=1
    elif i in 'pP':
        p[1]+=1
    elif i in 'Tt':
        p[3]+=1
    elif i in 'Ll':
        p[2]+=1
for i in range(p[1]+p[2]+p[3]+p[0]):
    for j in range(4):
        if p[0]==p[1]==p[2]==p[3]==0:
            break
        if p[j]<=0:
            continue
        print(t[j],end='')
        p[j]-=1