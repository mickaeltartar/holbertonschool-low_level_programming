#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of chars and initialize with unsigned
 *
 * @size: The size of array
 * @c: The char to array
 *
 * Return: return 0 if the function fail - NULL
 * else the pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;

	unsigned int index;

	if (size == 0)
		return (NULL);

	ptr = malloc(sizeof(char) * size);

	if (ptr == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		ptr[index] = c;

	return (ptr);
}
