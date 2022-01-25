
#include "stdio.h"
#pragma warning(disable:4996)
#include "stdlib.h"
#include "string.h"

char r[5]="";
int ff(int year)
{
	int x = 1000, num[4];
	for (size_t i = 0; i < 4; i++)
	{
		num[i] = year / x;
		year -= num[i] * x;
		x /= 10;
	}
	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j < 3-i; j++)
		{
			if (num[j]>num[j+1])
			{
				int t = num[j];
				num[j] = num[j+1];
				num[j + 1] = t;
			}
		}
	}
	int f = 0,c=1;

	for (size_t i = 1; i < 4; i++)
	{
		if (num[i]==num[i-1])
		{
			f = 1;
		}
		else
		{
			f = 0;
		}
		if (f==0)
		{
			c++;
		}
	}

	return c;
}


char* fs(int year)
{
	r[5] = "";
	int x = 1000;
	for (size_t i = 0; i < 4; i++)
	{
		int t = year / x;
		r[i] = t + 48;
		x /= 10;
		year -= x * 10 * t;
	}
	return r;
}





int main()
{
	int year, count,Year;
	scanf("%d %d",&year,&count);
	Year = year;
	while (1)
	{
		if (ff(year)==count)
		{
			printf("%d %s",year-Year,fs(year));
			break;
		}
		else
		{
			year++;
		}
	}


	return 0;
}
