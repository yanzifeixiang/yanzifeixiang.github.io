num=int(input())
x='zxcvbnmlaksjhdgfqpowiueytr'
w='QPWOEIURYTALSKDJFHGZMXNCBV'
nn='0123456789'
c=0
for count in range(num):
    s1=input()
    s=''
    for i in s1:
        if i in w:
            if i=='I':
                s+=i
            else:
                s+=i.lower()
        else:
            s+=i

    st=''
    print(s1)
    print('AI: ',end='')
    s=' '+s
    for i in range(1,len(s)):
        if s[i]==' ':
            if s[i-1]==' ':
                pass
            else:
                st+=s[i]
                c+=1
        elif (s[i] not in x) and (s[i] not in w) and (s[i] not in nn):
            if (s[i-1]==' '):                
                st=st[:-1]+s[i]
                
            else:
                st+=s[i]
                c+=1
        else:
            st+=s[i]
            c+=1
    
    li=st.split()
    np=-1
    for i in li[:]:
        np+=1
        pp=''
        le=len(i)
        if ('I' in i) :
            
            if le>1 and (i[1] not in x) and (i[1] not in w) and (i[1] not in nn):
                pp=i[1:]
                li[np]='you'+pp
            elif le==1:
                li[np]='you'
                
        elif ('me' in i) :
            if le>2 and (i[2] not in x) and (i[2] not in w) and (i[2] not in nn):
                pp=i[2:]
                li[np]='you'+pp
            elif le==2:
                li[np]='you'
    st=' '.join(li)

    st=st.replace('can you', 'I can')
    st=st.replace('could you', 'I could')
    st=st.replace('?', '!')
    
    while st[-1]==' ':
        st=st[:-1]
    
    print(st)
    