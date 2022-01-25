
def F(m):
    return m/1.09

def M(f):
    return f*1.09

n=int(input())

for i in range(n):
    io=input().split()
    if io[0]=='M':
        print('%.2f'%F(float(io[1])))
    else:
        print('%.2f'%M(float(io[1])))