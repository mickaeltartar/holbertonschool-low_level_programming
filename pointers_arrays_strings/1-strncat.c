#include "main.h"

/**
 * _strncat - concatenates two strings since n
 * @dest: string to destiny
 * @src: string to source
 * @n: value to n
 * Return: return a concatenate string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, lenght = 0;

	while (*(dest + lenght) != '\0')
		lenght++;
	for (i = 0; i < n && *(src + i) != '\0'; i++)
	{
		*(dest + lenght) = *(src + i);
		lenght++;
	}
	return (dest);
}
