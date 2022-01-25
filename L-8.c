
#include "stdio.h"
#include "string.h"
int main()
{
    int a, b,count=0,sum=0;
    scanf("%d %d",&a,&b);
    for (size_t i = 0; i < b-a+1; i++)
    {
        if (i%5==0 && i!=0)
        {
            printf("\n");
        }
        printf("%5d", a + i);
        sum += a + i;
    }
    printf("\nSum = %d",sum);
    return 0;
}