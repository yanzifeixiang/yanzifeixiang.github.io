
#include "stdio.h"
#pragma warning(disable:4996)
#include "stdlib.h"
#include "string.h"

int main()
{
	float a, s;
	scanf("%f %f",&a,&s);
	if (s==0)
	{
		printf("%.0f/0=Error\n", a);
	}
	else if (s<0)
	{
		printf("%.0f/(%.0f)=%.2f", a, s, a / s);
	}
	else
	{
		printf("%.0f/%.0f=%.2f", a, s, a / s);
	}
	return 0;
}
