#include<stdio.h>
#pragma warning(disable:4996)


int main()
{
	float a, z;
	scanf("%f %f", &a, &z);
	printf("%.2f", a * z * 0.1);
	return 0;
}