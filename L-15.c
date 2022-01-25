
#include "stdio.h"
#include "string.h"
#pragma warning(disable:4996)
int main()
{
    int n,f;
    char c;
    scanf("%d ",&n);
    scanf("%c",&c);
    f = n % 2;
    if (f==1)
    {
        f = n / 2 + 1;
    }
    else
    {
        f = n / 2;
    }
    for (size_t i = 0; i < f; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            printf("%c",c);
        }
        printf("\n");
    }

    return 0;
}
