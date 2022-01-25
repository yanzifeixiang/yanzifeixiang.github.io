
lis=[]
while 1:
    io=input()
    if io=='.':
        break
    lis.append(io)

l=len(lis)

if  l<2:
    print('Momo... No one is for you ...')
elif l>=2 and l<14:
    print(f'{lis[1]} is the only one for you...')
else:
    print(f'{lis[1]} and {lis[13]} are inviting you to dinner...')

