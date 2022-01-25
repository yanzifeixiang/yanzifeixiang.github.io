
#include "stdio.h"
#include "string.h"
#pragma warning(disable:4996)


int main()
{
    char h1, h2, m1, m2;
    int x, t;
    scanf("%c%c:%c%c",&h1,&h2,&m1,&m2);
    t = (h1-48) * 10 + h2-48;
    x = m1 + m2-2*48;
    if ((t==12&&x!=0)||(t>12))
    {
        if (x==0)
        {
            x = t - 12;
        }
        else
        {
            x = t - 12 + 1;
        }
        for (size_t i = 0; i < x; i++)
        {
            printf("Dang");
        }
        printf("\n");
    }
    else
    {
        printf("Only %c%c:%c%c.  Too early to Dang.\n",h1,h2,m1,m2);
    }

    return 0;
}
