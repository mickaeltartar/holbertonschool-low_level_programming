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
 * puts2 - print every caracter
 * @str: the string
 */

void puts2(char *str)
{
	int index = 0;

	while (str[index] != '\0' && index < _strlen(str))
	{
		_putchar (str[index]);
		index += 2;
	}
	_putchar('\n');
}


