
#include "stdio.h"
#pragma warning(disable:4996)
#include "stdlib.h"
#include "string.h"

int main()
{
	int nn = 1,io;
	unsigned long long int lll = 1;

	scanf("%d",&io);

	while (1)
	{
		int x = lll / io, y = lll % io;
		if ((x!=0)&&(y==0))
		{
			printf("%d %d",x,nn);
			break;
		}
		else
		{
			int r = 1;
			for (size_t i = 0; i < nn; i++)
			{
				r *= 10;
			}
			nn++;
			lll += r;
		}
	}
	return 0;
}
