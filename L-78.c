#include<stdio.h>
#include<string.h>
#include<math.h>
#pragma warning(disable:4996)

char zm[53] = "qwertyuioplaksjdhfgzmxncbvQPWOEIRUTYALSKDJFHGMZNXBCV";
char ZF[30] = "!*&^%$#@~`-_=+<>,./?;'\"{}[]\\|";
char qd[8] = "qiandao";
char ry[5] = "easy";
char strf[501] = "";
int main()
{
	int num, n,p=0,f;
	scanf("%d %d", &num, &n);
	getchar();
	for (size_t i = 0; i < num; i++)
	{
		p++;
		char str[501] = "";
		gets(str);
		char* s = strstr(str,qd);
		char* c = strstr(str,ry);
		if (s==NULL&&c==NULL)
		{
			n--;
			if (n==-1)
			{
				f = p;
				printf("%s", str);
			}
		}
	}
	if (n>=0)
	{
		printf("Wo AK le\n");
	}
	return 0;
}