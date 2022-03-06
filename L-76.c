#include<stdio.h>
#include<string.h>
#include<math.h>
#pragma warning(disable:4996)


int main()
{
	int num, m;
	scanf("%d %d", &num, &m);
	for (size_t i = 0; i < num; i++)
	{
		float mm;
		scanf("%f", &mm);
		if (mm<m)
		{
			printf("On Sale! %.1f\n", mm);
		}
	}
	
	return 0;
}