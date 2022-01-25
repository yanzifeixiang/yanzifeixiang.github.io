
#include "stdio.h"
#pragma warning(disable:4996)
#include "stdlib.h"
#include "string.h"
#include "math.h"
int gg(int h,int g)
{
	float t,j;
	t = (h - 100) * 1.8;
	j = (t - g) * (t-g);
	j = sqrt(j);
	if (j<t*0.1)
	{
		return 0;
	}
	else if (t<g)
	{
		return 1;
	}
	return -1;
}

int main()
{
	int num, h, g;
	scanf("%d",&num);
	for (size_t i = 0; i < num; i++)
	{
		scanf("%d %d", &h, &g);
		int ff = gg(h,g);
		if (ff==0)
		{
			printf("You are wan mei!\n");
		}
		else if (ff==1)
		{
			printf("You are tai pang le!\n");
		}
		else
		{
			printf("You are tai shou le!\n");
		}
	}
	return 0;
}