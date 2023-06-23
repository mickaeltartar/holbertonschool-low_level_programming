#include <stdio.h>

/**
 * main - print natural numbers
 *
 * Return: 0
 */

int main(void)
{
	int num = 1;
	int sum;

	while (num < 1024)
	{
		if (num % 3 == 0)
		{
			sum = sum + num;
		}
		else if (num % 5 == 0)
		{
			sum = sum + num;
		}
		num++;
	}
	printf("%i\n", sum);
	return (0);
}
