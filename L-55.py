
a,b=map(int,input().split())

x,y,z=map(int,input().split())

if x==y==z:
    if x==0:
        print(f'The winner is a: {a} + 3')
    else:
        print(f'The winner is b: {b} + 3')

else:
    num=0
    for i in range(3):
        if i==0:
            num+=1
        
    
    if a>b:
        print(f'The winner is a: {a} + {num}')
    else:
        print(f'The winner is b: {b} + {3-num}')

