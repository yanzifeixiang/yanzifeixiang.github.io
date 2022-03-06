#include<stdio.h>
#include<string.h>
#include<math.h>
#pragma warning(disable:4996)


int main()
{
	int num, count;
	scanf("%d %d", &num, &count);
	getchar();
	for (size_t i = 0; i < count; i++)
	{
		int le = 1, ri ;
		ri = pow(2, num);
		char f[31] = "";
		gets(f);
		for (size_t j = 0; j < num; j++)
		{
			if (f[j]=='y')
			{
				ri = (le + ri) / 2;
			}
			else
			{
				le = (le + ri) / 2 + 1;
			}
		}
		printf("%d\n", le);
	}
	return 0;
}