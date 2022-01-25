
num,ch=input().split()
num=int(num)
i=3
al=1
s=0
while 1:
    if al>num:
        al=al-(i-2)*2
        s=num-al
        break
    al+=2*i
    i+=2
i-=4
for j in range(i//2):
    l=(i-j*2)
    st=ch*l
    st=' '*((i-l)//2)+st
    print(st)
st=' '*(i//2)+ch
print(st)
for j in range(i//2):
    l=(3+j*2)
    st=ch*l
    st=' '*((i-l)//2)+st
    print(st)
print(s)
