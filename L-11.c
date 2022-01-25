//--------------------------------------------------------------------部分正确----------------------------------------------------------------------------------

#include "stdio.h"
#include "string.h"
int main()
{
    char x[10001], y[10001];
    int lx, ly;
    fgets(x, 10001, stdin);
    fgets(y, 10001, stdin);
    lx = strlen(x);
    ly = strlen(y);
    for (int i = 0; i < ly; i++)
    {
        char t = y[i];
        while (1)
        {
            char* p = NULL;
            p = (char*)memchr(x, t, 10001);
            if (!p)
            {
                break;
            }
            
            *p = '\0';

        }

    }
    for (int i = 0; i < lx; i++)
    {
        if (x[i] == '\0')
        {
            continue;
        }
        printf("%c", x[i]);
    }
    printf("\n");


    return 0;
}