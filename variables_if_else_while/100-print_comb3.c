#include <stdio.h>

/**
 * main - print all possiblie different combinations with two digits
 *
 * Return: 0
 */

int main(void)
{

	int digit1 = 0;
	int digit2 = 1;

	while (digit1 <= 8)
	{
		while (digit2 <= 9)
		{
			putchar((digit1) + '0');
			putchar((digit2) + '0');

			if (digit1 == 8)
				break;

			putchar(',');
			putchar(' ');

			digit2++;
		}

		digit1++;
		digit2 = digit1 + 1;
	}

	putchar('\n');

	return (0);
}
