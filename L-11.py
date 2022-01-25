a=input()
b=input()
for i in b:
    x=a.split(i)
    a=''
    for j in x:
        a+=j
print(a)
