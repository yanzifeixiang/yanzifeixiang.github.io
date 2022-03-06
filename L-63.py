num=int(input())

for i in range(num):
    li=input().split()
    for x in range(3):
        li[x]=int(li[x])
    
    if li[0]==1:
        if li[1]>130:
            print('ni li hai!',end=' ')
        elif li[1]<130:
            print('duo chi yu!',end=' ')
        else:
            print('wan mei!',end=' ')
            
        if li[2]>27:
            print('shao chi rou!')
        elif li[2]<27:
            print('duo chi rou!')
        else:
            print('wan mei!')
    else:
        if li[1]>129:
            print('ni li hai!',end=' ')
        elif li[1]<129:
            print('duo chi yu!',end=' ')
        else:
            print('wan mei!',end=' ')
            
        if li[2]>25:
            print('shao chi rou!')
        elif li[2]<25:
            print('duo chi rou!')
        else:
            print('wan mei!')