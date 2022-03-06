#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)


int main()
{
	int num;
	scanf("%d" ,&num);
	for (size_t j = 0; j < num; j++)
	{
		int s, h, g;
		scanf("%d %d %d",&s,&h,&g);

		if (s==0)
		{
			if (h==129)
			{
				printf("wan mei!");
			}
			else if (h>129)
			{
				printf("ni li hai!");
			}
			else
			{
				printf("duo chi yu!");
			}
			if (g == 25)
			{
				printf(" wan mei!\n");
			}
			else if (g > 25)
			{
				printf(" shao chi rou!\n");
			}
			else
			{
				printf(" duo chi rou!\n");
			}
		}
		else
		{
			if (h == 130)
			{
				printf("wan mei!");
			}
			else if (h > 130)
			{
				printf("ni li hai!");
			}
			else
			{
				printf("duo chi yu!");
			}
			if (g == 27)
			{
				printf(" wan mei!\n");
			}
			else if (g > 27)
			{
				printf(" shao chi rou!\n");
			}
			else
			{
				printf(" duo chi rou!\n");
			}
		}
	}
	return 0;
}