#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)


int main()
{
	int num1, num2;
	int f[3];

	scanf("%d %d", &num1, &num2);
	scanf("%d %d %d", &f[0], &f[1], &f[2]);

	int a = 0;
	for (size_t i = 0; i < 3; i++)
	{
		if (f[i] == 0)
		{
			a++;
		}
	}

	if (num1<num2)
	{
		if (a<3)
		{
			printf("The winner is b: %d + %d\n", num2, 3 - a);
		}
		else
		{
			printf("The winner is a: %d + %d\n", num1, a);
		}
	}
	else
	{
		if (a > 0)
		{
			printf("The winner is a: %d + %d\n", num1, a);
			
		}
		else
		{
			printf("The winner is b: %d + %d\n", num2, 3 - a);
		}
	}


	return 0;
}