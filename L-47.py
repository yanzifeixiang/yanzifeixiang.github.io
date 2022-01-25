
n=int(input())

for i in range(n):
    l=input().split()

    if int(l[1]) in range(15,21) and int(l[2]) in range(50,71):
        continue
    else:
        print(l[0])