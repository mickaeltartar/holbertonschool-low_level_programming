#include "main.h"

/**
 * reverse_array - reverse content in an array of integer.
 * @a: array.
 * @n: number of integer in array.
 * Return : nothing
 * betty style doc for function main goes there
 */

void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		int temp = a[i];

		a[i] = a[j];
		a[j] = temp;
	}
}
