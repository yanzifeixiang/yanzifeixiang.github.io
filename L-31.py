
def jj(h,g):
    h-=100
    h*=1.8
    x=(g-h)**2
    x=x**0.5
    if x<h*0.1:
        return 'You are wan mei!'
    elif g>h:
        return 'You are tai pang le!'
    return 'You are tai shou le!'

io=int(input())
for i in range(io):
    x=list(map(int,input().split()))
    print(jj(x[0],x[1]))