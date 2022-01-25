
#include "stdio.h"
#pragma warning(disable:4996)
#include "stdlib.h"
#include "string.h"

int main()
{
	char name[1000][11] = { "" };
	int num=0;
	while (1)
	{
		scanf("%s",name[num++]);
		if (strcmp(".",name[num-1])==0)
		{
			break;
		}
	}
	if (num<=2)
	{
		printf("Momo... No one is for you ...\n");
	}
	else if (num<=14)
	{
		printf("%s is the only one for you...",name[1]);
	}
	else
	{
		printf("%s and %s are inviting you to dinner...\n",name[1],name[13]);
	}
	
	return 0;
}
