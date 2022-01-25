a,b=map(int,input().split(" "))
p=0
for i in range(b-a+1):
    if i%5==0 and i!=0:
        print()
    print("%5d"%(a+i),end='')
    p+=a+i
print('\nSum = %d'%p)
