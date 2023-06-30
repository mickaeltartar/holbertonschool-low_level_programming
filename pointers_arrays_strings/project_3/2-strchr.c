#include "main.h"

/**
 * _strchr - char in a string
 * @s: the string
 * @c: the caracter
 * Return: pointer to the char
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c)
		i++;

	if (s[i] == c)
		return (&s[i]);
	else
		return (NULL);
}
