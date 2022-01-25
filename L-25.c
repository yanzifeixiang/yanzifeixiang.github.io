
#include "stdio.h"
#pragma warning(disable:4996)
#include "string.h"
int main()
{
	char num1[1000] = "", num2[1000] = "";
	int l1, l2, f;
	scanf("%s", num1);
	getchar();
	fgets(num2, 1000, stdin);
	l1 = strlen(num1);
	l2 = strlen(num2);
	num2[l2 - 1] = '\0';
	l2 -= 1;
	for (size_t i = 0; i < l1; i++)
	{
		f = 0;
		int cv = num1[i] - 48;
		for (size_t j = 0; j < 10; j++)
		{
			if (cv == j)
			{
				f += 1;
				break;
			}
		}
		if (f == 0)
		{
			l1 = 0;
			break;
		}
	}
	for (size_t i = 0; i < l2; i++)
	{
		f = 0;
		for (size_t j = 0; j < 10; j++)
		{
			if (num2[i] - 48 == j)
			{
				f += 1;
				break;
			}
		}
		if (f == 0)
		{
			l2 = 0;
			break;
		}
	}
	int k = 0, j = 0;
	if ((l1 > 0 && l1 < 5) && (l2 > 0 && l2 < 5)&&l1!=0&&l2!=0)
	{
		for (size_t i = 0; i < l1; i++)
		{
			if (num1[i] - 48 != 0)
			{
				k = 1;
				break;
			}
			if (i == l1 - 1)
			{
				l1 = 0;
			}
		}
		for (size_t i = 0; i < l2; i++)
		{
			if (num2[i] - 48 != 0)
			{
				j = 1;
				break;
			}
			if (i == l2 - 1)
			{
				l2 = 0;
			}
		}
		if (j == 0 || k == 0||l1==0||l2==0)
		{
			goto X;
		}
		int out1 = 0, out2 = 0;
		for (size_t i = 0; i < l1; i++)
		{
			int hh = 1;
			for (size_t jj = 0; jj < l1 - i - 1; jj++)
			{
				hh *= 10;
			}
			out1 += (num1[i] - 48) * hh;
		}
		for (size_t i = 0; i < l2; i++)
		{
			int hh = 1;
			for (size_t jj = 0; jj < l2 - i - 1; jj++)
			{
				hh *= 10;
			}
			out2 += (num2[i] - 48) * hh;
		}
		if ((out1 > 0 && out1 < 1001) && (out2 > 0 && out2 < 1001))
		{
			printf("%s + %s = %d", num1, num2, out1 + out2);
		}
		else
		{
			if (!(out1 > 0 && out1 < 1001))
			{
				l1 = 0;
			}
			if (!(out2 > 0 && out2 < 1001))
			{
				l2 = 0;
			}
			goto X;
		}
	}

	else
	{

		if (!(l1 > 0 && l1 < 5))
		{
			l1 == 0;
		}
		if (!(l2 > 0 && l2 < 5))
		{
			l2 == 0;
		}

	X:
		if (l1 == 0 && l2 != 0)
		{

			printf("? + %s = ?", num2);
		}
		else if (l1 != 0 && l2 == 0)
		{
			printf("%s + ? = ?", num1);
		}
		else
		{
			printf("? + ? = ?");
		}
	}
	return 0;
}

