
#include "stdio.h"
int main()
{
	int num, l1=0, l0=0,p[25];
	char p1[25][9] = { "" }, p0[25][9] = { "" }, pp[25][9] = {""};
	scanf("%d",&num);
	for (size_t i = 0; i < num; i++)//收集数据
	{
		int f;
		char name[9] = "";
		scanf("%d %s",&f,name);
		if (i<num/2)
		{
			strcpy(pp[i], name);
			p[i] = f;
		}
		if (f==0)
		{
			strcpy(p0[l0++], name);
		}
		else
		{
			strcpy(p1[l1++], name);
		}
	}
	for (size_t i = 0; i < num/2; i++)
	{
		printf("%s ",pp[i]);
		if (p[i]==1)
		{
			printf("%s\n",p0[--l0]);
		}
		else
		{
			printf("%s\n",p1[--l1]);
		}

	}
	



	return 0;
}