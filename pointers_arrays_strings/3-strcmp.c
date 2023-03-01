#include "main.h"

/**
 * _strcmp - function that compare a string
 * @s1: char to compare
 * @s2: char to compare
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int r;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			r = s1[i] - s2[i];
			return (r);
		}
		i++;
	}

	return (0);
}
