
year,num=input().split()
y=year
year=year.zfill(4)
while 1:
    li=[]
    for i in year:
        li.append(i)
    li=set(li)
    if len(li)==int(num):
        print(int(year)-int(y),year)
        break
    year=int(year)+1
    year=str(year).zfill(4)
