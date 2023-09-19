#include "search_algos.h"

/**
 * linear_search - search for value in an array
 * using a linear search algorithm
 * @array: pointer to first element of an array
 * @size: size of the array
 * @value: value to be found in array
 * Return: first index if value is find in a array otherwise return -1
*/

int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (array == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%lu] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
	}
	return (-1);
}
