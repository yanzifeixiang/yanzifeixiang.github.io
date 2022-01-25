
#include "stdio.h"
#pragma warning(disable:4996)
#include "stdlib.h"
#include "string.h"
int num[10000];
int cmpfunc(const void* a, const void* b)
{
	return (*(int*)a-*(int*)b);
}

int main()
{
	int count0, count1,num0=0,f=1,max=1,p=0;
	scanf("%d",&count0);
	for (size_t i = 0; i < count0; i++)
	{
		scanf("%d",&count1);
		for (size_t j = 0; j < count1; j++)
		{
			scanf("%d",&num[num0++]);
		}
	}
	qsort(num,num0,sizeof(int),cmpfunc);

	for (size_t i = 1; i < num0; i++)
	{
		if (num[i]==num[i-1])
		{
			f++;
			if (f>=max)
			{
				p = i;
				max = f;
			}
		}
		else
		{
            if (max==1)
			{
				p = i;
			}
			f = 1;
		}
	}

	printf("%d %d",num[p],max);

	return 0;
}
