#include "main.h"

/**
 * create_array - create array of chars and init with a specific char
 * @size: size of array
 * @c: fill array value with the char
 *
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	int i = 0;

	if (size <= 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	while (i < (int)size)
	{
		*(array + i) = c;
		i++;
	}

	*(array + i) = '\0';

	return (array);
}
