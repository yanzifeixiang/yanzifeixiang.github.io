
#include "stdio.h"
#include "string.h"
int main()
{
	int len;
	char num[1001] = "";
	int coun[10] = {0};
	scanf("%s", num);
	len = strlen(num);
	for (size_t i = 0; i < len; i++)
	{
		if (num[i] == '0')
		{
			coun[0]++;
		}
		else if (num[i] == '1')
		{
			coun[1]++;
		}
		else if (num[i] == '2')
		{
			coun[2]++;
		}
		else if (num[i] == '3')
		{
			coun[3]++;
		}
		else if (num[i] == '4')
		{
			coun[4]++;
		}
		else if (num[i] == '5')
		{
			coun[5]++;
		}
		else if (num[i] == '6')
		{
			coun[6]++;
		}
		else if (num[i] == '7')
		{
			coun[7]++;
		}
		else if (num[i] == '8')
		{
			coun[8]++;
		}
		else if (num[i] == '9')
		{
			coun[9]++;
		}
	}
	for (size_t i = 0; i < 10; i++)
	{
		if (coun[i]!=0)
		{
			printf("%d:%d\n", i, coun[i]);
		}
	}



	return 0;
}