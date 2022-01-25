di={0:'ling',1:'yi',2:'er',3:'san',4:'si',5:'wu',6:'liu',7:'qi',8:'ba',9:'jiu'}
io=input()
p=0
for i in io:
    p+=1
    if i=='-':
        print('fu',end='')
    elif p==1:
        i=int(i)
        print(di[i],end='')
    else:
        i=int(i)
        print("",di[i],end='')
print()
