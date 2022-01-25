def j(x):
    if x==0:
        return 1
    out=1
    for i in range(x):
        out*=(i+1)
    return out



out=0
io=int(input())
for i in range(io):
    out+=j(i+1)
print(out)
