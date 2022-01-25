
ini=input().split()
ini[0]=int(ini[0])
out=input()
le=len(out)
if le>=ini[0]:
    out=out[le-ini[0]:]
    print(out)
else:
    print(ini[1]*(ini[0]-le),end='')
    print(out)

