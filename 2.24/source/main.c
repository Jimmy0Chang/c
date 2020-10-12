#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x;
	scanf_s("%d", &x);
	if (x % 2 == 0)
	{
		printf("%d is even", x);
	}
	if (x % 2 != 0)
	{
		printf("%d is odd", x);
	}




	return 0;
}