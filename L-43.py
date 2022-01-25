#----------------------------------------------------------部分正确----------------------------------------------------------


day=int(input())

c=0
dic={}
time=0
count=0
while 1:
    io=input().split()

    if io[0]=='0':
        if count==0:
            print(0,0)
        else:
            print(count,int(time/count))
        c+=1
        time=0
        count=0
        dic={}
        if c==day:
            break
        continue
    
    if io[0] in dic:
        if io[1]=='E':
            ti=dic[io[0]]
            ti1=list(map(int,(io[2].split(':'))))
            h=ti1[0]-ti[0]
            m=ti1[1]-ti[1]
            time+=h*60+m
            dic.pop(io[0])
            count+=1
    else:
        if io[1]=='S':
            t=list(map(int,io[2].split(':')))
            
            dic[io[0]]=t
