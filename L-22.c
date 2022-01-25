
#include "stdio.h"
#pragma warning(disable:4996)
int main()
{
	int n, p,j=0;
	scanf("%d",&n);
	for (size_t i = 0; i < n; i++)
	{
		scanf("%d",&p);
		if (p%2==1)
		{
			j++;
		}
	}
	printf("%d %d",j,n-j);
	return 0;
}