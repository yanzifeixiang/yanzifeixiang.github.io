#include<stdio.h>
#pragma warning(disable:4996)


int main()
{
	int a, s;
	scanf("%d %d", &a, &s);

	for (size_t i = 0; i < a+s; i++)
	{
		printf("Wang!");
	}
    printf("\n");
	return 0;
}