#include "main.h"
#include <stdlib.h>

/**
 * _strdup - return a pointer to a new allocation
 *
 * @str: The string to be copied
 *
 * Return: if str is NULL else a pointer to be duplicate
 */

char *_strdup(char *str)
{
	char *copy;

	int index;
	int len = 0;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		len++;

	copy = malloc(sizeof(char) * (len + 1));

	if (copy == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		copy[index] = str[index];

	copy[len] = '\0';

	return (copy);
}
