#include<stdio.h>
#include<string.h>
#include<math.h>
#pragma warning(disable:4996)


int main()
{
	int num[24];
	for (size_t i = 0; i < 24; i++)
	{
		scanf("%d", &num[i]);
	}
	while (1)
	{
		int f;
		scanf("%d", &f);
		if (f<0 || f>23)
		{
			break;
		}
		else
		{
			if (num[f]>50)
			{
				printf("%d Yes\n", num[f]);
			}
			else
			{
				printf("%d No\n", num[f]);
			}
		}
	}
	return 0;
}