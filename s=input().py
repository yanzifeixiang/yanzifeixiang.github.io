'''
def isNum(x):
    try:
        x=eval(x)
        return True
    except:
        return False    
import math
inc=input()
f=isNum(inc)
if (f==0):
    print("Input Error") 
else:
    inc=float(inc)
    if (inc>0):
        out=math.cos(inc)+math.e**inc
    elif (inc<=0):
        out=0
    print("f(%.2f) = %.2f"%(inc,out))
'''

'''
import math
a,b,c=map(float,input().split())
f1=a+b-c
f2=a+c-b
f3=b+c-a
if f1>0 and f2>0 and f3>0:
    s=(a+b+c)/2
    ss=math.sqrt(s*(s-a)*(s-b)*(s-c))
    print("area=%.2f"%ss)
else:
    print("Not A Valid Triangle!")
'''

'''
x=float(input())
if x==0:
    print("g(0.000) = 0.000",end="")
else :
    out=1/(2*x)
    print("g(%.3f) = %.3f"%(x,out),end="")
'''
'''
inn=input()
if inn[0]=="$":
    inn=float(inn[1:])
    out=inn*7
    print("￥%.2f"%out,end="")
elif inn[0]=='￥':
    inn=float(inn[1:])
    out=inn/7
    print("$%.2f"%out,end="")
else :
    print("输入格式错误",end="")
'''

'''
inn=input()
le=len(inn)
if inn[le-1]=='F' or inn[le-1]=='f':
    inn=float(inn[:le-1])
    out=(inn-32)/1.8
    print("%.2fC"%out,end='')
elif inn[le-1]=='C' or inn[le-1]=='c':
    inn=float(inn[:le-1])
    out=inn*1.8+32
    print("%.2fF"%out,end='')
else:
    print("Error",end='')
'''



# a=eval(input())

# x=(a[0])
# y=(a[1])
# if x>0 :
#     if y>0:
#         print("第一象限")
#     else:
#         print("第四象限")
# else:
#     if y>0 :
#         print("第二象限")
#     else :
#         print("第四象限")

# str=input()
# for i in range(2):
#     if str[i]!=str[4-i]:
#         print("no")
#         break
# else:
#     print("yes")


# year,moth=map(int,input().split())
# flage=1
# if year%4==0:
#     if year%100!=0:
#         flage=0
#     elif year%400==0:
#         flage=0
# if moth==2:
#     if flage==1:
#         print(28)
#     else:
#         print(29)
# elif moth==1 or moth==3 or moth==5 or  moth==7 or moth==8 or moth==10 or moth==12:
#     print(31)
# elif moth==4 or moth==6 or moth==9 or moth==11:
#     print(30)
# else:
#     print("Error")


# g=float(input())
# h=float(input())
# out=g*703/(h**2)
# out=(int(out*100))/100

# if out>25.0:
#     print("BMI = %.2f"%out)
#     print("体重超重")
# elif out<18.5:
#     print("BMI = %.2f"%out)
#     print("体重过轻")
# else:
#     print("BMI = %.2f"%out)
#     print("体重最佳")


# inn=int(input())
# a1=inn*0.1
# a2=(inn-100000)*0.075
# a3=(inn-200000)*0.05
# a4=(inn-400000)*0.03
# a5=(inn-600000)*0.015
# a6=(inn-1000000)*0.01

# if inn>=100000:
#     if inn>=200000:
#         if inn>=400000:
#             if inn>=600000:
#                 if inn>=1000000:
#                     out=100000*0.1+100000*0.075+200000*0.05+200000*0.03+400000*0.015+a6
#                     print("%.1f"%out,end="")

#                 else:
#                     out=100000*0.1+100000*0.075+200000*0.05+200000*0.03+a5
#                     print("%.1f"%out,end="")
#             else:
#                 out=100000*0.1+100000*0.075+200000*0.05+a4
#                 print("%.1f"%out,end="")
#         else:
#             out=100000*0.1+100000*0.075+a3
#             print("%.1f"%out,end="")
#     else:
#          out=100000*0.1+a2
#          print("%.1f"%out,end="")
# elif inn>0:
#     print("%.1f"%a1,end="")
# if inn<=0:
#     print("0.0",end="")

# fishc=r'''      ___                     ___          ___          ___     
#      /\  \         ___       /\  \        /\__\        /\  \    
#     /::\  \       /\  \     /::\  \      /:/  /       /::\  \   
#    /:/\:\  \      \:\  \   /:/\ \  \    /:/__/       /:/\:\  \  
#   /::\~\:\  \     /::\__\ _\:\~\ \  \  /::\  \ ___  /:/  \:\  \ 
#  /:/\:\ \:\__\ __/:/\/__//\ \:\ \ \__\/:/\:\  /\__\/:/__/ \:\__\
#  \/__\:\ \/__//\/:/  /   \:\ \:\ \/__/\/__\:\/:/  /\:\  \  \/__/
#       \:\__\  \::/__/     \:\ \:\__\       \::/  /  \:\  \      
#        \/__/   \:\__\      \:\/:/  /       /:/  /    \:\  \     
#                 \/__/       \::/  /       /:/  /      \:\__\    
#                              \/__/        \/__/        \/__/'''
# print(fishc)


# for i in range(1,10):
#     for j in range(1,i+1):
#         print("%d * %d = %2d"%(j,i,i*j),end="")
#     print("\n")


import random

counts = int(input("请输入抛硬币的次数："))
i = 0

print("开始抛硬币实验：")
while i < counts:
    num = random.randint(1, 10)

    if num % 2:
        print("正 ", end=" ")
    else:
        print("反 ", end=" ")

    i += 1