#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)


int main()
{
	int num,mean=0,min,nmin;
	char name[10000][9] = { "" };
	int n[10000];

	scanf("%d", &num);
	for (size_t i = 0; i < num; i++)
	{
		scanf("%s %d", name[i], &n[i]);
		mean += n[i];
	}
	mean =mean / num / 2;
	min = (mean-n[0])* (mean - n[0]);
	nmin = 0;
	for (size_t i = 1; i < num; i++)
	{
		int d = (mean - n[i])*(mean - n[i]);
		if (d<min)
		{
			min = d;
			nmin = i;
		}
	}

	printf("%d %s\n", mean, name[nmin]);

	return 0;
}