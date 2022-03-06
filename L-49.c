#include<stdio.h>
#pragma warning(disable:4996)

int per[100][100] = { 0 };
int index[100] = { 0 };
int ind[100] = { 0 };
int in[100] = { 0 };
int main()
{
	int xuex,count=0,num=0;
	scanf("%d", &xuex);

	for (size_t i = 0; i < xuex; i++)
	{
		int x;
		scanf("%d",&x);
		index[i] = x * 10;
		ind[i] = x * 10;
		num += index[i];
	}

	int c = 0;
	int fl = -1;;
	while (c!=num)
	{
		for (size_t i = 0; i < xuex; i++)
		{

			if (ind[i] != 0 )
			{
				if (fl==i)
				{
					count++;
				}
				fl = i;
				count++;
				int r = in[i];
				per[i][r] = count;
				in[i]++;
				ind[i]--;
				c++;
			}
			
		}
	}

	for (size_t i = 0; i < xuex; i++)
	{
		printf("#%d\n", i + 1);
		int f = 0;
		for (size_t j = 0; j < index[i]; j++)
		{
			f++;
			if (f==10)
			{
				f = 0;
				printf("%d\n", per[i][j]);
			}
			else
			{
				printf("%d ", per[i][j]);
			}
		}
	}
	return 0;
}