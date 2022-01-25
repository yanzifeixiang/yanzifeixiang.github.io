
#include "stdio.h"
#include "string.h"
int main()
{
    char x[100][19] = {""}, h[11] = {'1','0','x','9','8','7','6','5','4','3','2'};
    int n, y[100], f[17] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2},out,count=0;
    scanf("%d",&n);
    for (size_t i = 0; i < n; i++)
    {
        scanf("%s",x[i]);
    }
    for (size_t i = 0; i < n; i++)
    {
        out = 0;
        int w;
        for (size_t j = 0; j < 17; j++)
        {
            w = x[i][j] - 48;
            if (w>=10||w<0)
            {
                w = -1;
                break;
            }
            else
            {
                out += w * f[j];
            }
        }
        if (w == -1)
        {
            y[count] = i;
            count++;
        }
        else
        {
            out %= 11;
            if (h[out]==x[i][17])
            {
                continue;
            }
            else
            {
                y[count] = i;
                count++;
            }
        }
    }
    if (count==0)
    {
        printf("All passed\n");
    }
    else
    {
        for (size_t i = 0; i < count; i++)
        {
            printf("%s\n",x[y[i]]);
        }
    }
    return 0;
}
