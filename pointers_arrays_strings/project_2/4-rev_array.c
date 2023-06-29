#include "main.h"

/**
 * reverse_array - reverse content of an array integer
 * @a: an array of integer
 * @n: the number of element to swap
 */

void reverse_array(int *a, int n)
{
	int temp;
	int start = 0;
	int end = n - 1;

	while (start < end)
	{
		temp = *(a + start);
		*(a + start) = *(a + end);
		*(a + end) = temp;
		start++;
		end--;
	}
}
