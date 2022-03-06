#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)


int main()
{
	int num;

	scanf("%d", &num);
	getchar();

	for (size_t i = 0; i < num; i++)
	{
		char str[101] = "",per1[4]="",per2[4] = "";

		gets(str);

		int le = strlen(str),f=0;
		for (size_t j = 0; j < 3; j++)
		{
			per1[2 - j] = str[le - 2 - j];
		}
		for (size_t j = 0; j < le; j++)
		{
			if (str[j]==',')
			{
				f = j - 3;
			}
		}
		for (size_t j = 0; j < 3; j++)
		{
			per2[j] = str[f+j];
		}
		int n1 = strcmp(per1, per2), n2 = strcmp(per1, "ong");
		if (n1==0 && n2==0)
		{
			int a = 0;
			for (size_t j = 0; j < le; j++)
			{
				if (str[le-1-j]==' ')
				{
					a++;
					if (a==3)
					{
						str[le - 1 - j] = '\0';
					}
				}
			}
			printf("%s", str);
			printf(" qiao ben zhong.\n");
		}
		else
		{
			printf("Skipped\n");
		}
	}
	return 0;
}