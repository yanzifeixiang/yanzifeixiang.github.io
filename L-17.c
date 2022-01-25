
#include "stdio.h"
#include "string.h"
#pragma warning(disable:4996)


int main()
{
    int  f, er = 0, le;
    char n[52] = "";
    float r[2] = { 1.0,1.0 }, h;
    scanf("%s",n);
    le = strlen(n);
    f = n[le - 1] - 48;
    f %= 2;
    if (f==1)
    {}
    else
    {
        r[0] = 2.0;
    }
    for (size_t i = 0; i < le; i++)
    {
        if (n[i]=='2')
        {
            er++;
        }
    }

    if (n[0]=='-')
    {
        r[1] = 1.5;
        le -=1;

    }
    h = (er  * r[1] * r[0] * 100.0)/le;
    printf("%.2f\%\n",h);


    return 0;
}