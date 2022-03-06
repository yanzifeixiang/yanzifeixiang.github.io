#include<stdio.h>
#pragma warning(disable:4996)

char zimu[27] = "abcdefghrjklmnopqrstuvwxyz";

int func(int num, int n)
{
	int out=1;
	for (size_t i = 0; i < n; i++)
	{
		out *= num;
	}
	return out;
}

int main()
{
	char out[7] = "";
	int num,count;
	scanf("%d %d", &num, &count);

	for (size_t i = 0; i < num; i++)
	{
		int q = func(26, num - 1 - i);
		int zhen = count / q ,z;

		count -= zhen * q;

		z = zhen;

		if (i+1!=num)
		{
			z += 1;
		}
		out[i] = zimu[26 - z];
	}
	printf("%s\n", out);
	return 0;
}