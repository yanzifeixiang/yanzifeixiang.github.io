#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)


int main()
{
	int a, b, s1, s2, s3, s;
	scanf("%d %d", &a, &b);

	s1 = (100 - a) * b;
	s2 = a * b / 2;
	s3 = (100 - a) * (100 - b) / 2;
	s = 10000 / 2 - s1 - s2 - s3;
	printf("%d", s);
	return 0;
}