#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#pragma warning(disable:4996)

int num[20000];
int cmpfunc(const void* a, const void* b)
{
	return(*(int*)a - *(int*)b);
}

int main()
{
	int n,ma=0,mi=0;
	scanf("%d",&n);
	for (size_t i = 0; i < n; i++)
	{
		scanf("%d", &num[i]);
	}
	qsort(num, n, sizeof(int), cmpfunc);
	for (size_t i = 0; i < n; i++)
	{
		if (num[0]==num[i])
		{
			mi++;
		}
		else
		{
			break;
		}
	}
	for (size_t i = 0; i < n; i++)
	{
		if (num[n-1] == num[n-1-i])
		{
			ma++;
		}
		else
		{
			break;
		}
	}
	printf("%d %d\n%d %d\n", num[0], mi, num[n - 1], ma);
	return 0;
}