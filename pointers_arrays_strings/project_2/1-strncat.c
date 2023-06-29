#include "main.h"

/**
 * _strncat - concatenate two string
 * @dest: destination
 * @src: string to concatenate
 * @n: the lenght of array
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *dest_ptr = dest;
	char *src_ptr = src;
	int i = 0, j = 0;

	while (*(dest_ptr + i) != '\0')
		i++;

	while (*(src_ptr + j) != '\0')
	{
		if (j < n)
		{
			*(dest_ptr + i) = *(src_ptr + j);
		}
		i++;
		j++;
	}
	*(dest_ptr + i) = '\0';

	return (dest);
}
