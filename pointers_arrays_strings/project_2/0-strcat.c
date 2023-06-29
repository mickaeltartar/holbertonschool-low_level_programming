#include "main.h"

/**
 * _strcat - concatenate two string
 * @dest: the destination
 * @src: the string to concatenante
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	char *dest_ptr = dest;
	const char *src_ptr = src;

	while (*dest_ptr != '\0')
		dest_ptr++;

	while (*src_ptr != '\0')
	{
		*dest_ptr = *src_ptr;
		dest_ptr++;
		src_ptr++;
	}
	*dest_ptr = '\0';

	return (dest);
}
