#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#pragma warning(disable:4996)
int num[1000], np, p;
int a, b, sum, f ,out;
void fun2()
{
	num[++np] = out;
	a = num[p];
	b = num[p + 1];
}
void fun3()
{
	num[++np] = out / 10;
	num[++np] = out - (num[np - 1] * 10);
	a = num[p];
	b = num[p + 1];
}

int main()
{
	scanf("%d %d %d", &a, &b, &sum);
	p = 0;
	num[0] = a;
	num[1] = b;
	np = 1;
	if (a==0||b==0)
	{
		printf("%d %d", a, b);
		for (size_t i = 0; i < sum-2; i++)
		{
			printf(" 0");
		}
		goto Y;
	}
	while (1)
	{
		if (np+1>=sum)
		{
			goto X;
		}
		else
		{
			out = a * b;
			p++;
			if (out<10)
			{
				fun2();
			}
			else
			{
				fun3();
			}
		}
	}
X:	for (size_t i = 0; i < sum; i++)
	{
		if (i==0)
		{
			printf("%d", num[i]);
		}
		else
		{
			printf(" %d", num[i]);
		}
	}
Y:
	
	return 0;
}