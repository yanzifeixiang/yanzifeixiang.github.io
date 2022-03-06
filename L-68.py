li=[]
n=int(input())

li=list(map(eval,input().split()))
p=0
for i in li[:]:
    p+=i**(-1)

p=(p/n)**(-1)
print('%.2f'%(p))