
#include "stdio.h"
#pragma warning(disable:4996)
#include "string.h"
int main()
{
	int f;
	scanf("%d",&f);
	if (f<6)
	{
		printf("%d",f+2);
	}
	else
	{
		printf("%d",f-5);
	}
	return 0;
}
