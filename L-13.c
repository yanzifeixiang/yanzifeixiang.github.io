
#include "stdio.h"
#include "string.h"
#pragma warning(disable:4996)

int jc(int x)
{
    int out=1;
    for (size_t i = x; i >= 1; i--)
    {
        out *= i;
    }
    if (x==0)
    {
        return 1;
    }
    else
    {
        return out;
    }
}

int main()
{
    int out=0,io;
    scanf("%d",&io);
    for (size_t i = io; i >=1; i--)
    {
        out += jc(i);
    }
    printf("%d", out);


    return 0;
}
