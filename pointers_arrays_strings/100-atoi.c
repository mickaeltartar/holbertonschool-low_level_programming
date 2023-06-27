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
 * _atoi - convert a string to an int
 * @s: string to search in
 * Return: return an int
 */

int _atoi(char *s)
{
	unsigned int result = 0;
	int index = 0;
	int sign = 1;

	while (s[index] && (!(s[index] >= '0' && s[index] <= '9')))
	{
		if (s[index] == '-')
			sign *= -1;
		index++;
	}
	while (s[index] >= '0' && s[index] <= '9')
	{
		result = result * 10 + (s[index] - '0');
		index++;
	}
	return (sign * result);
}





