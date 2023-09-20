#include "search_algos.h"

/**
 * printArray - print an array of integers
 * @array: pointer to first element
 * @left: start of the array
 * @right: end of the array
*/

void printArray(int *array, size_t left, size_t right)
{
	size_t index;

	printf("Searching in array:");
	for (index = left; index < right; index++)
		printf(" %d,", array[index]);
	printf(" %d\n", array[index]);
}

/**
 * binaryRecursive - recursive search
 * @array: pointer to first element in the array
 * @left: start to left side of the array
 * @right: end to right of the array
 * @value: value to be found in array
 * Return: -1 if fail
 */

int binaryRecursive(int *array, size_t left, size_t right, int value)
{
	int center;

	if (left > right)
		return (-1);
	printArray(array, left, right);
	center = (left + right) / 2;

	if (array[center] == value)
		return (center);
	else if (array[center] > value)
		return (binaryRecursive(array, left, center - 1, value));
	return (binaryRecursive(array, center + 1, right, value));
}

/**
 * binary_search - search for a value in a sorted array
 * using Binary search algorithm
 * @array: the array check for the value
 * @size: element in the array
 * @value: value to be found in array
 * Return: first index if the value is found otherwise -1
 */

int binary_search(int *array, size_t size, int value)
{
	if (!array || !size)
		return (-1);
	return (binaryRecursive(array, 0, size - 1, value));
}
