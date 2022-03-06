a=int(input())

for i in range(a):
    x=input()
    x1=0
    x2=0
    for n in range(0,3):
        x1+=int(x[n])
    for n in range(3,6):
        x2+=int(x[n])
    if x1==x2:
        print('You are lucky!')
    else:
        print('Wish you good luck.')