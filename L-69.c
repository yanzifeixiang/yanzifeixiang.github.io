#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)


int main()
{
	int num[6],d,f=0;

	for (size_t i = 0; i < 6; i++)
	{
		scanf("%d", &num[i]);
	}
	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = i+1; j < 4; j++)
		{
			int di =(num[i] - num[j]);
            if (di<0)
            {
                di = -di;
            }
			if (di>num[5])
			{
				int p;
				if (num[i]>num[j])
				{
					p = j;
				}
				else
				{
					p = i;
				}
				if (f>0 && d==p)
				{

				}
				else
				{
					d = p;
					f++;
				}
			}
		}
	}
	for (size_t i = 0; i < 4; i++)
	{
		if (num[i] < num[4])
		{
			if (f==1 && d==i)
			{

			}
			else
			{
				d = i;
				f++;
			}
		}
	}
	if (f==0)
	{
		printf("Normal\n");
	}
	else if (f==1)
	{
		printf("Warning: please check #%d!\n", d+1);
	}
	else
	{
		printf("Warning: please check all the tires!\n");
	}
	return 0;
}