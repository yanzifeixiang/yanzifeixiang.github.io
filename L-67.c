#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)


int main()
{
	float a,f, b,o;
	scanf("%f %f %f",&a,&f,&b);
	if (f==0)
	{
		o = 2.455 * a ;
	}
	else
	{
		o = a *  1.26;
	}
	printf("%.2f", o);
	if (b<o)
	{
		printf(" T_T\n");
	}
	else
	{
		printf(" ^_^\n");
	}
	return 0;
}