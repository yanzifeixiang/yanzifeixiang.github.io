#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)


int main()
{
	int num,n1=0,n2=0;
	scanf("%d", &num);
    getchar();
    
	for (size_t j = 0; j < num; j++)
	{
        n1=0;
        n2=0;
		char str[7] = "";
		gets(str);
		for (size_t i = 0; i < 6; i++)
		{
			if (i < 3)
			{
				n1 += str[i] - 48;
			}
			else
			{
				n2 += str[i] - 48;
			}
		}
		if (n1 == n2)
		{
			printf("You are lucky!\n");
		}
		else
		{
			printf("Wish you good luck.\n");
		}
	}
	return 0;
}