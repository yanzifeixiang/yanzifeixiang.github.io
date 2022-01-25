#------------------------------------------部分正确--------------------------------------------

l=[7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2]

li=['1','0','X','9','8','7','6','5','4' ,'3','2']
b=[]
n=int(input())
x=[]
for i in range(n):
    x.append(input())
for i in range(n):
    t=0
    if 'X' in x[i][:-1]:
        b.append(i)
        continue
    for j in range(17):
        t+=l[j]*int(x[i][j])
    t%=11
    t=li[t]
    if t!=x[i][-1]:
        b.append(i)
le=len(b)
if le==0:
    print('All passed')
else:

    for i in range(le):
        print(x[b[i]])
