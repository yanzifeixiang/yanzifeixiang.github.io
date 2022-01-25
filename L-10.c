
#include "stdio.h"
int main()
{
    int a, b, c,x,y,z;
    scanf("%d %d %d",&a,&b,&c);
    x = a;
    if (x<b)
    {
        x = b;
    }
    if (x < c)
    {
        x = c;
    }
    z = a;
    if (z > b)
    {
        z = b;
    }
    if (z > c)
    {
        z = c;
    }
    y = a + b + c - x - z;
    printf("%d->%d->%d\n",z,y,x);
    return 0;
}