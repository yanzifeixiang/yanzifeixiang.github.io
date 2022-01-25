
#include "stdio.h"
int main()
{
	char c;
	long int n,count=0,num=0;
	scanf("%ld %c", &n, &c);
	for (size_t i = 1; i > 0; i++)
	{
		num += 1;
		if (i==1)
		{
			count += 1;
		}
		else
		{
			count += 2 * i;
		}
		if (count>n)
		{
			num -= 1;
			count -= 2 * i;
			break;
		}
		i++;
	}
	for (size_t i = num; i >1 ; i--)
	{
		int nu = 2 * i - 1;
		int co = (num * 2 - 1 - nu) / 2;
		for (size_t j = 0; j < co; j++)
		{
			printf(" ");
		}
		for (size_t j = 0; j < nu; j++)
		{
			printf("%c", c);
		}
		printf("\n");
	}
	for (size_t i = 1; i < num+1; i++)
	{
		int nu = 2 * i - 1;
		int co = (num * 2 - 1 - nu) / 2;
		for (size_t j = 0; j < co; j++)
		{
			printf(" ");
		}
		for (size_t j = 0; j < nu; j++)
		{
			printf("%c",c);
		}
		printf("\n");
	}
	printf("%d\n", n - count);
	return 0;
}