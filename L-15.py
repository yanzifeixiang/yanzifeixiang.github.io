
a,b=input().split(" ")
a=int(a)
if a%2==1:
    n=1+a//2
else:
    n=a//2
for i in range(n):
    for j in range(a):
        print(b,end='');
    print()

