
def ss(x):
    if x==0 or x==1:
        return 'No'
    if x==2 or x==3:
        return 'Yes'
    p=int(x**0.5)+1
    for i in range(2,p+1):
        if x%i==0:
            return 'No'
    else:
        return 'Yes'
    return 'No'
x=int(input())
for i in range(x):
    print(ss(int(input())))
