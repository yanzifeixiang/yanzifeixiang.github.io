num=int(input())

for i in range(num):
    lis=input().split(',')
    w1=lis[0].split()[-1]
    w2=lis[1].split()[-1]
    w2=w2[:-1]
    if w1[-3:]=='ong' and w2[-3:]=='ong':
        print(lis[0],',',sep='',end=' ')
        for u in lis[1].split()[:-3]:
            print(u,end=' ')
        print('qiao ben zhong.')
    else:
        print('Skipped')