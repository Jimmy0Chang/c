#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x;
	int y;
	int z;
	scanf_s("%d%d%d", &x, &y, &z);
	if (x > y && x > z)
	{
		printf("%d is the largest\n", x);
	}
	if (y > x && y > z)
	{
		printf("%d is the largest\n", y);
	}
	if (z > x && z > y)
	{
		printf("%d is the largest\n", z);
	}
	if (x < y && x < z)
	{
		printf("%d is the smallest", x);
	}
	if (y < x && y < z)
	{
		printf("%d is the smallest", y);
	}
	if (z < y && z < x)
	{
		printf("%d is the smallest", z);
	}



	return 0;
}