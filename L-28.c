
#include "stdio.h"
#pragma warning(disable:4996)
#include "stdlib.h"
#include "string.h"
#include "math.h"
int ss(int x)
{
	if (x==3 || x == 2)
	{
		return 1;
	}
	else if (x==1)
	{
		return 0;
	}
	int f = sqrt(x)+1,p=0;
	for (size_t i = 2; i <=f; i++)
	{
		if (x%i==0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int num, x,f;
	scanf("%d",&num);
	for (size_t i = 0; i < num; i++)
	{
		scanf("%d",&x);
		f = ss(x);
		if (f==1)
		{
			printf("Yes\n");
		}
		else
		{
			printf("No\n");
		}
	}
	
	return 0;
}
