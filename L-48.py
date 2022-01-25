
li=list(map(int,input().split()))
li1=[]

for i in range(li[0]):
    l=list(map(int,input().split()))

    li1.append(l)

li0=list(map(int,input().split()))
li10=[]

if li[1]==li0[0]:
    for i in range(li0[0]):
        l=list(map(int,input().split()))

        li10.append(l)
    lll=[]
    for i in range(li[0]):
        ll=[]
        for j in range(li0[1]):
            x=0
            for k in range(li[1]):
                x+=(li1[i][k]*li10[k][j])

            ll.append(x)
        lll.append(ll)
    
    print(li[0],li0[1])
    for i in range(li[0]):
        for j in range(li0[1]):
            if j==li0[1]-1:
                print(lll[i][j])
            else:
                print(lll[i][j],end=' ')

    
else:
    print(f'Error: {li[1]} != {li0[0]}')

