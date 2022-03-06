a,b=map(int,input().split())

s1=(100-a)*b
s2=a*b/2
s3=(100-a)*(100-b)/2
s=10000/2-s1-s2-s3
print(int(s))
