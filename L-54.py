
c,n=input().split()
n=int(n)
lll=[]

for i in range(n):
    l=list(input())
    l.reverse()
    lll.append(l)

for i in range(n//2):
    if lll[i]!=lll[-1-i]:
        break
else:
    print('bu yong dao le')

for i in range(n):
    for u in lll[-1-i]:
        if u==' ':
            print(' ',end='')
        else:
            print(c,end='')
    print()
    