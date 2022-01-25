
#include "stdio.h"
#include "string.h"
int main()
{
	int io;
	scanf("%d", &io);
	io = 5 * (io - 32) / 9;
	printf("Celsius = %d\n", io);
	return 0;
}