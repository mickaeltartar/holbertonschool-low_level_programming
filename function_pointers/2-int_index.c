#include "function_pointers.h"

/**
 * int_index - search for integer in array via function pointer
 * @array: array
 * @size: size of array
 * @cmp: pointer to search/compare function that we need
 * Return: index when int of index found, otherwise -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	while (i < size)
	{
		if (cmp(*(array + i)))
			return (i);
		i++;
	}
	return (-1);
}
