
#include "stdio.h"
#pragma warning(disable:4996)
#include "stdlib.h"
#include "string.h"

int main()
{
	char y[11] = "";
	scanf("%s",y);
	char year[5] = "", yue[3] = "", ri[3] = "";
	int q = 0, w = 0, e = 0;
	for (size_t i = 0; i < 10; i++)
	{
		if (i<2)
		{
			yue[q++] = y[i];
		}
		else if(i>2&&i<=4)
		{
			ri[w++] = y[i];
		}
		else if (i!=2&&i!=5)
		{
			year[e++] = y[i];
		}
	}
	printf("%s-%s-%s",year,yue,ri);


	return 0;
}
