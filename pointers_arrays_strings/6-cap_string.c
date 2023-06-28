#include "main.h"

/**
 * cap_string - capitalize all words of a string
 * @s: the string
 * Return: the string
 */

char *cap_string(char *s)
{
	char *str_ptr = s;
	int index = 0;

	if (islower(*(str_ptr + index)))
		(*(str_ptr + index)) = toupper(*(str_ptr + index));
	index++;

	while (*(str_ptr + index) != '\0')
	{
		if (islower(*(str_ptr + index)) && (isspace(*(str_ptr + index - 1))))
		if (ispunct(*(str_ptr + index - 1)))
			((*(str_ptr + index)) = toupper(*(str_ptr + index)));
		if (*(str_ptr + index) == '\t')
			(*(str_ptr + index) = ' ');
		index++;
	}
	return (str_ptr);
}

