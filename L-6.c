
#include "stdio.h"
#include "string.h"
int main()
{
	int io,count=0;
	scanf("%d",&io);
	int y[100][2],f,ji=1;
	for (size_t i = 2; i <= io/2+1; i++)
	{
		if (io%i==0)
		{
			y[count][0] = i;
			if (count != 0)
			{
				if (f+1==i)
				{
					ji++;
					y[count][1] = ji;
				}
				else
				{
					ji = 1;
					y[count][1] = ji;
				}
			}
			f = i;
			count++;
		}
		else
		{
			ji = 1;
		}
	}
	y[0][1] = 1;
	int max=1;
	for (size_t i = 0; i < count; i++)
	{
		if (max<y[i][1])
		{
			max = y[i][1];
		}
	}
	for (size_t i = 0; i < count; i++)
	{
		if (max==y[i][1])
		{
			printf("%d\n", max);
			for (size_t j = 0; j < max; j++)
			{
				if (j==0)
				{
					printf("%d", y[i][0] - max + 1 + j);
				}
				else
				{
					printf("*%d", y[i][0] - max + 1 + j);
				}
			}
			break;
		}
	}
    printf("\n");
	return 0;
}
