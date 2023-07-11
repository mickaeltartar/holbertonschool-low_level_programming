#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string to duplicate
 * Return: pointer to duplicate str in allocated memory
 */

char *_strdup(char *str)
{
	char *str_dup;
	int i = 0;
	int len = 0;

	if (str == NULL)
		return (NULL);

	while (*(str + i))

		len++, i++;

	str_dup = malloc(sizeof(char) * len);

	if (str_dup == 0)
		return (NULL);

	i = 0;

	while (i < len)
	{
		*(str_dup + i) = *(str + i);
		i++;
	}

	return (str_dup);
}



