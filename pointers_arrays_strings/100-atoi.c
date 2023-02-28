#include "main.h"

/**
 * _atoi - print nums.
 * @s: The array value
 *
 * Return: num
 */

int _atoi(char *s)
{
	int num, index, index0, index1, sign;

	for (index = 0; s[index] != '\0'; index++)
	{
		if (s[index] == '-')
		{
			sign *= -1;
		}
	}

	for (index = 0; index != '0'; index++)
	{
		if (s[index] >= '0' && s[index] <= '9')
		{
			break;
		}
	}
	for (index0 = index; s[index0] != '\0'; index0++)
	{
		if (s[index0] <= '0' && s[index] >= '9')
		{
			break;
		}
	}
	if (sign % 2 == 0)
	{
		for (index1 = index; s[index1] <= s[index0]; index1++)
		{
			num = ((10 * num + s[index1]) * -1);
		}
	}
	else
		for (index1 = index; s[index1] <= s[index0]; index1++)
		{
			num = (10 * num + s[index1]);
		}
	return (num);
}



