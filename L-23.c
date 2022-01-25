
#include "stdio.h"
#pragma warning(disable:4996)
#include "string.h"
int main()
{
	char t[4] = { 'G','P','L','T' }, r[10001] = "", v[10001];
	int g[4] = {0,0,0,0},le;
	scanf("%s",r);
	le = strlen(r);
	for (size_t i = 0; i < le; i++)
	{

		if (r[i] == 'G' || r[i] == 'g')
		{
			g[0]++;
		}
		else if (r[i] == 'P' || r[i] == 'p')
		{
			g[1]++;
		}
		else if (r[i] == 'L' || r[i] == 'l')
		{
			g[2]++;
		}
		else if (r[i] == 'T' || r[i] == 't')
		{
			g[3]++;
		}

	}
	int num = g[0] + g[1] + g[2] + g[3];
	for (size_t i = 0; i <num ; i++)
	{
		for (size_t k = 0; k < 4; k++)
		{
			if (g[0]+g[1]+g[2]+g[3]==0)
			{
				printf("\n");
				goto c;
			}
			if (g[k]>0)
			{
				g[k]--;
				printf("%c",t[k]);
			}
		}
	}
c:	return 0;
}

