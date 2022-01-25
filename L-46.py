
io=input()
le=len(io)
io=int(io)
x='1'*(le)
while 1:
    if int(x)%io==0 and int(x)//io!=0:
       print(int(x)//io,len(x))
       break
    x+='1'