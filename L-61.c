#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)


int main()
{
	float g, h;
	float out;

	scanf("%f %f", &g, &h);
	out = g / (h*h);
	printf("%.1f\n", out);
	if (out>25)
	{
		printf("PANG\n");
	}
	else
	{
		printf("Hai Xing\n");
	}
	return 0;
}