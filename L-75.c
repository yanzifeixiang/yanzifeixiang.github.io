#include<stdio.h>
#include<string.h>
#include<math.h>
#pragma warning(disable:4996)


int main()
{
	char str[7] = "";
	gets(str);
	int le = strlen(str), y=0;
	if (le==4)
	{
		for (int i = 0; i < 2; i++)
		{
			y += (str[i] - 48) * pow(10, 1-i);
		}
		if (y<22)
		{
			y = 20;
		}
		else
		{
			y = 19;
		}
		printf("%d",y);
		for (size_t i = 0; i < 4; i++)
		{
			if (i==1)
			{
				printf("%c-",str[i]);
			}
			else
			{
				printf("%c",str[i]);
			}
		}
	}
	else
	{
		for (size_t i = 0; i < 6; i++)
		{
			if (i==3)
			{
				printf("%c-",str[i]);
			}
			else
			{
				printf("%c",str[i]);
			}
		}
	}
	return 0;
}