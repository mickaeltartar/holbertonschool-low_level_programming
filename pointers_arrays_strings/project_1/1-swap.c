#include "main.h"

/**
 * swap_int - swap the value of two integer
 * @a: the first value
 * @b: the ssecond value
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
