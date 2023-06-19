#include <stdio.h>

/**
 * main - Print the alphabet
 *
 * Return: 0
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar (c);
		c++;
	}
	putchar ('\n');
	return (0);
}
