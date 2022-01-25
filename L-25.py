
io=input().split(maxsplit=1)
if len(io)==1:
    io.append('o')
k=[]
for i in io[0]:
    if i in '1230456789':
        continue
    u=0
    break
else:
    u=int(io[0])
if k==[]and 1000>=u>0:
    k.append(u)
else:
    k.append('?')
for i in io[1]: 
    if i in '1230456789':
        continue
    u=0
    break
else:
    u=int(io[1])
if len(k)==1 and 1000>=u>0 :
    k.append(u)
else:
    k.append('?')
if  '?' in k:
    print(f"{k[0]} + {k[1]} = ?")
else:
    print(f"{k[0]} + {k[1]} = {k[0]+k[1]}")
