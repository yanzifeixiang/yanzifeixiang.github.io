#include<stdio.h>
#pragma warning(disable:4996)

int a[100][100], b[100][100], out[100][100];
int ra, rb, rout, ca, cb, cout;

void func(int c, int r, int f)
{
	for (size_t i = 0; i < r; i++)
	{
		for (size_t j = 0; j < c; j++)
		{
			if (f == 0)
			{
				scanf("%d", &a[i][j]);
			}
			if (f == 1)
			{
				scanf("%d", &b[i][j]);
			}
			
		}
	}
}

void func2()
{

	for (size_t i = 0; i < rout; i++)
	{
		for (size_t j = 0; j < cout; j++)
		{
			int one = 0;
			for (size_t k = 0; k < ca; k++)
			{
				one += a[i][k] * b[k][j];
			}
			out[i][j] = one;
		}
	}
}



int main()
{
	scanf("%d %d", &ra, &ca);
	func(ca, ra, 0);
	scanf("%d %d", &rb, &cb);
	func(cb, rb, 1);

	if (ca!=rb)
	{
		printf("Error: %d != %d\n", ca, rb);
	}
	else
	{
		rout = ra;
		cout = cb;
		printf("%d %d\n",rout,cout);
		func2();
		for (size_t i = 0; i < rout; i++)
		{
			for (size_t j = 0; j < cout; j++)
			{
				if (j+1==cout)
				{
					printf("%d\n", out[i][j]);
				}
				else
				{
					printf("%d ", out[i][j]);
				}
			}
		}

	}
	return 0;
}