
count=int(input())
num=0
lis=[]
out=[]

while 1:
    io=input()
    if io=='End':
        break
    lis.append(io)
    if num==0:
        num+=1
        if io=='ChuiZi':
            out.append('Bu')
        elif io=='JianDao':
            out.append('ChuiZi')
        else:
            out.append('JianDao')
    elif  num%count==0:
        num=0
        out.append(io)
    else:
        num+=1
        if io=='ChuiZi':
            out.append('Bu')
        elif io=='JianDao':
            out.append('ChuiZi')
        else:
            out.append('JianDao')

for i in out:
    print(i)
