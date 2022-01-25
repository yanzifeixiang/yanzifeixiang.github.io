
#include "stdio.h"
#pragma warning(disable:4996)
#include "stdlib.h"
#include "string.h"


int cmpfunc(const void*a,const void*b)
{
	return (*(char*)a-*(char*)b);
}
int main()
{
	int n;
	char p1[11]="", out[11]="", in[12]="";
	scanf("%s",in);
	for (size_t i = 0; i < 11; i++)//将不同的数存在p1;
	{
		int le = strlen(p1),f=-1;
		for (size_t j = 0; j < le; j++)
		{
			if (in[i]==p1[j])
			{
				f = j;
				break;
			}
		}
		if (f==-1)
		{
			p1[le] = in[i];
		}
	}
	int le = strlen(p1);
	qsort(p1,le,sizeof(char),cmpfunc);//对p1快排排序
	char p2[11] = "";
	for (size_t i = 0; i < le; i++)//将p1逆置到p2
	{
		p2[i] = p1[le - 1 - i];
	}
	for (size_t i = 0; i < 11; i++)//解码
	{
		int k;
		for (size_t j = 0; j < le; j++)
		{
			if (p2[j]==in[i])
			{
				k = j;
			}
		}
		out[i] = k + 48;
	}
	//push
	printf("int[] arr = new int[]{");
	for (size_t i = 0; i < le ; i++)
	{
		if (i==0)
		{
			printf("%c",p2[0]);
		}
		else
		{
			printf(",%c",p2[i]);
		}
	}
	printf("};\n");
	printf("int[] index = new int[]{");
	for (size_t i = 0; i < 11; i++)
	{
		if (i == 0)
		{
			printf("%c", out[0]);
		}
		else
		{
			printf(",%c", out[i]);
		}
	}
	printf("};\n");

	return 0;
}
