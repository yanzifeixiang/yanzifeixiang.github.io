#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)


int main()
{
	char str[1001] = "",out[1001]="";
	
	gets(str);
	int le = strlen(str),n=0,f=0;

	for (size_t i = 0; i < le+1; i++)
	{
		if (str[i]=='6')
		{
			f++;
		}
		else
		{
			if (f<4)
			{
				for (size_t j = 0; j < f; j++)
				{
					out[n++] = '6';
				}
			}
			else if (f<10)
			{
				out[n++] = '9';
			}
			else
			{
				out[n++] = '2';
				out[n++] = '7';
			}
            out[n++] = str[i];
			f = 0;
		}
	}
	out[n++] = '\n';
	out[n] = '\0';
	printf("%s", out);
	return 0;
}