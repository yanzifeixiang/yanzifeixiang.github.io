
#include "stdio.h"
#include "string.h"
int main()
{
    char dic[10][5] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    char io[50];
    int len,t;
    scanf("%s",io);
    if (io[0]!='-')
    {
        if (io == "0")
        {
            printf("%s\n", dic[0]);
        }
        else
        {
            len = strlen(io);
            for (size_t i = 0; i < len; i++)
            {
                if (i==0)
                {
                    t = io[i] - 48;
                    printf("%s", dic[t]);
                    continue;
                }
                t = io[i] - 48;
                printf(" %s",dic[t]);
            }
        }
    }
    else
    {
        printf("fu");
        len = strlen(io);
        for (size_t i = 1; i < len; i++)
        {
            t = io[i] - 48;
            printf(" %s", dic[t]);
        }
    }
    return 0;
}