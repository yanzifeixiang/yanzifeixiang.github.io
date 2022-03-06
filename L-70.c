#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)


int main()
{
	char str[81];
	int num = -1,n1,count=0;
	do
	{
		char* c=NULL;
		num++;
		gets(str);
		c=strstr(str, "chi1 huo3 guo1");
		if (c!=NULL)
		{
			if (count==0)
			{
				n1 = num + 1;
			}
			count++;
		}

	} while (strcmp(str,".")!=0);

	
	if (count!=0)
	{
		printf("%d\n%d %d\n", num, n1, count);
	}
	else
	{
		printf("%d\n-_-#\n",num);
	}
	return 0;
}