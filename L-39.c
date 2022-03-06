#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)


int main()
{
	int num,count,le,n=0;
	char str[1001] = "",out[100][1001]={""};
	
	scanf("%d", &num);
	getchar();
	gets(str);

	le = strlen(str);
	count = le / num;
	if (le%num)
	{
		count++;
	}

	for (size_t i = 0; i < count; i++)
	{
		for (size_t j = 0; j < num; j++)
		{
			char c;
			if (str[n]=='\0')
			{
				c = ' ';
			}
			else
			{
				c = str[n++];
			}
			out[j][count - 1 - i] = c;
		}
	}

	for (size_t i = 0; i < num; i++)
	{
		for (size_t j = 0; j < count; j++)
		{
			printf("%c", out[i][j]);
		}
		printf("\n");
	}
	return 0;
}