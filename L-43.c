//---------------------------------------------------------------------------部分正确===================

#include "stdio.h"
#pragma warning(disable:4996)
#include "stdlib.h"
#include "string.h"

struct Q
{
	int name, time;
	char c;
};

int Time(char* time)
{
	int h, m;
	h = 10 * (time[0] - 48);
	h += time[1] - 48;
	m = 10 * (time[3]-48);
	m += time[4] - 48;
	return h * 60 + m;
}



int main()
{
	int day;
	scanf("%d",&day);
	for (size_t i = 0; i < day; i++)
	{
		int tim = 0,j=0,b=0,fff[1000],ff=0;
		int count = 0;
		struct Q book[2000];
		while (1)
		{
			char ti[6] = "";
			scanf("%d %c %s",&(book[b].name),&(book[b].c),ti);
			book[b].time = Time(ti);
			if (book[b].name==0)
			{
				if (count==0)
				{
					printf("0 0\n");
				}
				else
				{
					float ttt = (tim + 0.5) / count;
					printf("%d %.0f\n", count, ttt);
				}
				break;
			}
			else if (book[b].c=='S')
			{
				fff[ff++] = b;
			}
			else
			{
				for (size_t op = 0; op < ff; op++)
				{
					if (book[b].name== book[fff[op]].name)
					{
						tim += book[b].time - book[fff[op]].time;
						count++;
						break;
					}
				}
			}
			b++;
		}
	}
	

	return 0;
}
