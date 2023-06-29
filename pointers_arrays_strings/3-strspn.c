#include "main.h"

/**
 * _strspn - lenght of string
 * @s: reserash
 * @accept: target
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int matches = 0;
	char *ptr_accept;
	char *str_ptr = s;

	while (*(str_ptr) != '\0')
	{
		ptr_accept = accept;
		while (*(ptr_accept) != '\0')
		{
			if (*(str_ptr) == (*(ptr_accept)))
			{
				matches++;
				break;
			}
			if (*(ptr_accept + 1) == '\0' && (*(str_ptr) != (*(ptr_accept))))
				return (matches);
			ptr_accept++;
		}
		str_ptr++;
	}
	return (matches);
}


