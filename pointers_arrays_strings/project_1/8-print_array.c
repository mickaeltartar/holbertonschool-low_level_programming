#include "main.h"

/**
 * print_array - print array of integer
 * @a: integers
 * @n: numbers of integers
 */

void print_array(int *a, int n)
{
	int index = 0;

	while (index < n)
	{
		if (index != (n - 1))
		{
			printf("%d, ", a[index]);
		}
		else
		{
			printf("%d", a[index]);
		}
		index++;
	}
	printf("\n");
}
