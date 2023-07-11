#include "main.h"

/**
 * str_concat - concatenate two string
 * @s1: the first string
 * @s2: the ssecond string
 * Return: pointer to concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int len0 = 0, len1 = 0;
	int i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (*(s1 + i) != '\0')
		len0++, i++;

	while (*(s2 + j) != '\0')
		len1++, j++;

	concat = malloc(sizeof(char) * (len0 + len1) + 1);

	if (concat == NULL)
		return (NULL);

	i = 0, j = 0;

	while (i < len0)
	{
		*(concat + i) = *(s1 + i);
		i++;
	}

	while (j < len1)
	{
		*(concat + i) = *(s2 + j);
		i++, j++;
	}

	return (concat);
}
