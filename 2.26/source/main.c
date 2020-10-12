#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x;
	int y;
	scanf_s("%d%d", &x, &y);
	if (y % x == 0) {
		printf("%d is the multiple of the %d", y, x);
	}
	if (y % x != 0) {
		printf("%d is not the multiple of the %d", y, x);
	}




	return 0;
}