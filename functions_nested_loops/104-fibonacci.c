#include <stdio.h>

/**
 *
 *
 *
 */

int main(void)
{
	unsigned long a = 1;
	unsigned long b = 1;
	unsigned long sum;
	int count;

	printf("1");

	for (count = 2; count < 99; count++)
	{
		sum = a + b;
		a = b;
		b = sum;
		printf(", %lu", sum);
	}

	printf("\n");
	return (0);
}


