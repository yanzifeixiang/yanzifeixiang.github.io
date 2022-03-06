
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#pragma warning(disable:4996)

float k0[1000];
int cmpfunc(const void* a, const void* b)
{
	return (*(float*)a > *(float*)b ? 1:-1);
}
int main()
{
	int num, xq; 
	float k[1000], out = 0, kc[1000], sj[1000], f[1000] = { 0 };
	scanf("%d %d", &num, &xq);
	for (size_t i = 0; i < num; i++)
	{
		scanf("%f", &kc[i]);
	}
	for (size_t i = 0; i < num; i++)
	{
		scanf("%f", &sj[i]);
		if (kc[i]==0)
		{
			k[i] = 0;
			k0[i] = k[i];
		}
		else
		{
			k[i] = sj[i] / (kc[i] * 1.0);
			k0[i] = k[i];
		}
	}
	qsort(k0, num, sizeof(float), cmpfunc);
	for (size_t i = 0; i < num; i++)
	{
		float temp = k0[num - 1 - i];
		int fla = -1;
		for (size_t j = 0; j < num; j++)
		{
			if (temp == k[j] && f[j] == 0)
			{
				f[j] = 1;
				fla = j;
				break;
			}
		}
		if (fla != -1)
		{
			if (xq >= kc[fla])
			{
				out += sj[fla];
				xq -= kc[fla];
			}
			else
			{
				out += k[fla] * xq;
				break;
			}
		}
	}
	printf("%.2f\n", out);
	return 0;
}