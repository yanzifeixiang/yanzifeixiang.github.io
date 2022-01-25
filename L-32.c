//------------------------------------------------------------------------部分正确-------------------------

#include "stdio.h"
#pragma warning(disable:4996)
#include "stdlib.h"
#include "string.h"


int main()
{
	char x1, x[10001] = "";
	int num,le;
	scanf("%d %c",&num,&x1);
	getchar();
	fgets(x, 10001, stdin);
	le = strlen(x)-1;
	x[le] = '\0';
	if (le>num)
	{
		for (size_t i = 0; i < num; i++)
		{
			printf("%c",x[le-num+i]);
		}
		printf("\n");
	}
	else
	{
		le = num - le;
		for (size_t i = 0; i < le; i++)
		{
			printf("%c",x1);
		}
		printf("%s\n",x);
	}
	
	return 0;
}

