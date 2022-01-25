
#include "stdio.h"
#include "string.h"
struct One
{
	char one[17];
	int two, th;
}p[1000];

int main()
{
	int num,count;
	scanf("%d", &num);
	for (size_t i = 0; i < num; i++)
	{
		scanf("%s %d %d", p[i].one, &(p[i].two), &(p[i].th));
	}
	scanf("%d", &count);
	int found[1000];
	for (size_t i = 0; i < count; i++)
	{
		scanf("%d", &found[i]);
	}
	for (size_t i = 0; i < count; i++)
	{
		for (size_t j = 0; j < num; j++)
		{
			if (found[i] == p[j].two)
			{
				printf("%s %d\n", p[j].one, p[j].th);
			}
		}
	}
	return 0;
}