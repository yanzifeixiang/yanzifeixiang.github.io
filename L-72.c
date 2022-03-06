#include<stdio.h>
#include<string.h>
#include<math.h>
#pragma warning(disable:4996)


int main()
{
	int num[3][3];
	int axis[3][2];
	int n = 45, f, outf = 0, x0, y0;
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			scanf("%d", &num[i][j]);
			n -= num[i][j];
			if (num[i][j]==0)
			{
				x0 = i, y0 = j;
			}
		}
	}
	num[x0][y0] = n;
	for (size_t i = 0; i < 3; i++)
	{
		int x, y;
		for (size_t j = 0; j < 2; j++)
		{
			scanf("%d", &axis[i][j]);
			axis[i][j] -= 1;
			if (j==0)
			{
				x = axis[i][j];
			}
			else
			{
				y = axis[i][j];
			}
		}
		printf("%d\n", num[x][y]);
	}
	scanf("%d", &f);
	if (f<4)
	{
		for (size_t i = 0; i < 3; i++)
		{
			outf+=num[f - 1][i];
		}
	}
	else if (f<7)
	{
		for (size_t i = 0; i < 3; i++)
		{
			outf += num[i][f - 4];
		}
	}
	else
	{
		if (f==7)
		{
			for (size_t i = 0; i < 3; i++)
			{
				outf += num[i][i];
			}
		}
		else
		{
			for (size_t i = 0; i < 3; i++)
			{
				outf += num[2 - i][ i];
			}
		}
	}
	int out[25] = { 0 };
	out[6] = 10000, out[7] = 36, out[8] = 720, out[9] = 360, out[10] = 80, out[11] = 252, out[12] = 108, out[13] = 72, out[14] = 54, out[15] = 180, out[16] = 72, out[17] = 180, out[18] = 119, out[19] = 36, out[20] = 306, out[21] = 1080, out[22] = 144, out[23] = 1800, out[24] = 3600;
	printf("%d\n", out[outf]);
	return 0;
}