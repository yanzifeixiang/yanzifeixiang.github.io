
#include "stdio.h"
#include "string.h"
#pragma warning(disable:4996)
int main()
{
    int num,out=2;
    scanf("%d",&num);
    for (size_t i = 0; i < num-1; i++)
    {
        out *= 2;
    }
    if (num!=0)
    {
        printf("2^%d = %d\n",num,out);
    }
    else
    {
        printf("2^0 = 1\n");
    }


    return 0;
}