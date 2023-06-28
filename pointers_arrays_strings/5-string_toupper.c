#include "main.h"

/**
 * string_toupper - change all lower case to uppercase
 * @s: the string
 * Return: the string with uppercase
 */

char *string_toupper(char *s)
{
	char *str_ptr = s;
	int index = 0;

	while (*(str_ptr + index) != '\0')
	{
		if (*(str_ptr + index) >= 'a' && (*(str_ptr + index)) <= 'z')
			(*(str_ptr + index) = (*(str_ptr + index) - 'a' + 'A'));
		index++;
	}
	return (str_ptr);
}
