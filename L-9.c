//---------------------------------------------------------------------部分正确---------------------------------------------------------------------------

#include "stdio.h"
#include "string.h"
#pragma warning(disable:4996)
int fun(int a,int b)
{
    int f;
    f = a % b;
    while (f!=0)
    {
        a = b;
        b = f;
        f = a % b;
    }
    return b;
}

int main()
{
    int num, x[200],fz=0,fm=1;
    scanf("%d",&num);
    for (size_t i = 0; i < num; i++)
    {
        scanf("%d/%d", &x[i*2],&x[i*2+1]);
        fm *= x[i * 2 + 1];
    }
    for (size_t i = 0; i < num; i++)
    {
        int t=fm;
        t /= x[i*2+1];
        t *= x[i * 2];
        fz += t;
    }
    num = fz / fm;
    fz = fz % fm;
    if (fz == 0)
    {
        if (num==0)
        {
            printf("0");
        }
        else
        {
            printf("%d",num);
        }
        goto X;
    }
    while (1)
    {
        int t = fun(fz, fm);
        if (t<=1)
        {
            break;
        }
        fz /= t;
        fm /= t;
    }
    if (num!=0)
    {
        printf("%d",num);
    }
    if (fz != 0)
    {
        if (num != 0)
        {
            printf(" ");
        }
        printf("%d/%d", fz, fm);
    }

    
X:  printf("\n");
    return 0;
}