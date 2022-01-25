
#include "stdio.h"
#pragma warning(disable:4996)
#include "stdlib.h"
#include "string.h"

int main()
{
	int x = 0, f, t, p;
	char ch;
	scanf("%d", &f);
	x++;
	if (f == 250)
	{
		p = x;
		printf("%d", x);
	}
	else
	{
		while (1)
		{
			t = scanf("%c%d", &ch, &f);
			x++;
			if (f == 250)
			{
				p = x;
				printf("%d", x);
				break;
			}
			if (t == 2 && ch == ' ')
			{
			}
			else
			{
				break;
			}
		}
	}
	return 0;
}


