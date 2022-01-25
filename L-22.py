n=int(input())
li=list(map(int,input().split()))
p=0
for i in li:
    if i%2==1:
        p+=1
print(p,n-p)
