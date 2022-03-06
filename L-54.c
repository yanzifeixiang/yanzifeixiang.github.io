#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)


int main()
{
	char c, s[100][102] = {""},str[102]="";
	int n,f=0;

	scanf("%c %d", &c, &n);
	getchar();

	for (size_t i = 0; i < n; i++)
	{
		gets(s[i]);
		int le = strlen(s[i]);
		for (size_t j = 0; j < le; j++)
		{
			if (s[i][j]!=' ')
			{
				s[i][j] = c;
			}
			str[le - 1 - j] = s[i][j];
		}
		str[le] = '\0';
		strcpy(s[i], str);
	}

	for (size_t	 i = 0; i < n/2; i++)
	{
		f = strcmp(s[i], s[n - 1 - i]);
		if (f!=0)
		{
			break;
		}
	}

	if (f==0)
	{
		printf("bu yong dao le\n");
	}
	for (size_t i = 0; i < n; i++)
	{
		printf("%s\n", s[n - 1 - i]);
	}
	return 0;
}