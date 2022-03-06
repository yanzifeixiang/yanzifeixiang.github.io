
num=0
count=0
w=input()
le=len(w)
for i in w:
    count+=1
    if i =='6':
        num+=1
        if count==le:
            if num<=3:
                print('6'*num,end='')
            elif num<=9:
                print('9',end='')
            else:
                print('27',end='')
    else:
        if num!=0:
            if num<=3:
                print('6'*num,end='')
            elif num<=9:
                print('9',end='')
            else:
                print('27',end='')
        num=0
        print(i,end='')
