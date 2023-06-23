#include <stdio.h>

/**
 * main - print all different combination with three digit
 *
 * Return: 0
 */

int main(void)
{
	int digit0 = 0;
	int digit1;
	int digit2;

	while (digit0 < 9)
	{
		digit1 = digit0 + 1;
		while (digit1 <= 9)
		{
			digit2 = digit1 + 1;
			while (digit2 <= 9)
			{
				putchar((digit0) + '0');
				putchar((digit1) + '0');
				putchar((digit2) + '0');

				if (digit0 == 7)
					break;
				putchar(',');
				putchar(' ');

				digit2++;
			}
			digit1++;
		}
		digit0++;
	}
	putchar('\n');
	return (0);
}
