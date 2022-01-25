
40:

#include "stdio.h"
#pragma warning(disable:4996)
#include "stdlib.h"
#include "string.h"


float F(float m)
{
	return m / 1.09;
}

float M(float f)
{
	return f * 1.09;
}

int main()
{
	int n;
	char k;
	scanf("%d",&n);
	getchar();
	for (size_t i = 0; i < n; i++)
	{
		float f;
		scanf("%c %f",&k,&f);
		getchar();
		if (k=='M')
		{
			printf("%.2f\n",F(f));
		}
		else
		{
			printf("%.2f\n", M(f));
		}
	}

	return 0;
}

