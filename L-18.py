x,y=map(int,input().split(':'))
h=str(x).zfill(2)
m=str(y).zfill(2)

if x<12 or (x==12 and y==0):
    
    print(f'Only {h}:{m}.  Too early to Dang.')
else:
    if y==0:
        le=x-12
    else:
        le=x-11
    print('Dang'*le)

