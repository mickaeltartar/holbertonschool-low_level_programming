#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Prints the times table of the input,
 *                     starting with 0.
 * @n: The value of the times table to be printed.
 */

void print_times_table(int n)
{
	int i, j, k;

	if (n < 0 || n > 15)
	{
		return (0);
	}
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				k = i * j;
				printf("%4d", k);
			}
			printf ("\n");
		}
}
