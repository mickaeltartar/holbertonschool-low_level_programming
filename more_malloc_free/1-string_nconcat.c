#include "main.h"

/**
 * _strlen - return the lenght of the string
 * @s: the string
 * Return: the lenght
 */

int _strlen(char *s)
{
	int lenght = 0;

	while (*s != '\0')
	{
		s++;
		lenght++;
	}
	return (lenght);
}

/**
 * string_nconcat - concatenate two string with numbers of bytes
 * @s1: the first string
 * @s2: the second string
 * @n: number of bytes to cancat from s2
 * Return: pointer to concatened string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int len, num;
	int i, j;

	num = n;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	if (num < 0)
		return (NULL);

	if (num >= _strlen(s2))
		num = _strlen(s2);

	len = (_strlen(s1) + num + 1);

	ptr = malloc(sizeof(*ptr) * len);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];

	for (j = 0; j < num; j++)
		ptr[i + j] = s2[j];

	ptr[i + j] = '\0';
	return (ptr);
}
