#include <stdio.h>

/**
 * main - print all possible combiantion witch two of two digit
 *
 * Return: 0
 */

int main(void)
{
	int digit0 = 0;
	int digit1;

	while (digit0 <= 100)
	{
		digit1 = digit0 + 1;
		while (digit1 < 100)
		{
			putchar((digit0 / 10) + '0');
			putchar((digit0 % 10) + '0');
			putchar(' ');
			putchar((digit1 / 10) + '0');
			putchar((digit1 % 10) + '0');

			if (digit0 != 98)
			{
				putchar(',');
				putchar(' ');
			}
			digit1++;
		}
		digit0++;
	}
	putchar('\n');
	return (0);
}
