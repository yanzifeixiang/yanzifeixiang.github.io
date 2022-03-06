#include<stdio.h>
#pragma warning(disable:4996)


int main()
{
	int num;

	scanf("%d",&num);

	for (size_t i = 0; i < num; i++)
	{
		int mai, hu,f=0;
		char name[4] = "";


		scanf("%s %d %d",name,&hu,&mai);

		if (hu>20 || hu<15)
		{
			f++;
		}
		if (mai>70 ||mai<50)
		{
			f++;
		}

		if (f>0)
		{
			printf("%s", name);
		}

	}



	return 0;
}