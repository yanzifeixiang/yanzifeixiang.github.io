
#include "stdio.h"
#include "string.h"
#pragma warning(disable:4996)


int main()
{
    int a, b,A,B, num, ppp[100][4],k[100];
    scanf("%d %d",&a,&b);
    scanf("%d",&num);
    for (size_t i = 0; i < num; i++)
    {
        scanf("%d %d %d %d",&ppp[i][0], &ppp[i][1], &ppp[i][2], &ppp[i][3]);
        k[i] = ppp[i][0] + ppp[i][2];
    }
    int f1, f2;
    A = a;
    B = b;
    for (size_t i = 0; i < num; i++)
    {
        f1 = 0;
        f2 = 0;
        if (ppp[i][1]==k[i])
        {
            f1 = 1;
        }
        if (ppp[i][3]==k[i])
        {
            f2 = 1;
        }
        if (f1==1&&f2==0)
        {
            a--;
            if (a==-1)
            {
                printf("A\n%d\n",B-b);
                break;
            }
        }
        else if ((f1 == 0 && f2 == 1))
        {
            b--;
            if (b == -1)
            {
                printf("B\n%d\n",A-a);
                break;
            }
        }
    }

    return 0;
}
