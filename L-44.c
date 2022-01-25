
#include "stdio.h"
#pragma warning(disable:4996)
#include "stdlib.h"
#include "string.h"

int main()
{
	int num,c=0;
	scanf("%d",&num);
	getchar();
	while (1)
	{
		char k[15] = "";

		fgets(k, 15, stdin);

		if (strcmp(k,"End\n") == 0)
		{
			break;
		}
		if (c==0)
		{
			c++;
			if (strcmp(k, "ChuiZi\n") == 0)
			{
				printf("Bu\n");
			}
			else if (strcmp(k, "Bu\n") == 0)
			{
				printf("JianDao\n");
			}
			else if (strcmp(k, "JianDao\n") == 0)
			{
				printf("ChuiZi\n");
			}
		}
		else if (c%num==0)
		{
			c = 0;
			printf("%s", k);
		}
		else
		{
			c++;
			if (strcmp(k, "ChuiZi\n") == 0)
			{
				printf("Bu\n");
			}
			else if (strcmp(k, "Bu\n") == 0)
			{
				printf("JianDao\n");
			}
			else if (strcmp(k, "JianDao\n") == 0)
			{
				printf("ChuiZi\n");
			}
		}
	}
	return 0;
}