#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)


int main()
{
	int n;
	float out = 0, num[1000];
	scanf("%d", &n);
	for (size_t i = 0; i < n; i++)
	{
		scanf("%f", &num[i]);
		out += (1./num[i]);
	}
	out = out / n;
	printf("%.2f", 1. / out);
	return 0;
}