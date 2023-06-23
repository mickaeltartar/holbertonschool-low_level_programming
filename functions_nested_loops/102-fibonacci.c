#include <stdio.h>

/**
 * main - print the first 50 fibonnai numbers starting with 1
 * Return: 0
 */

int main(void)
{
	int count = 0;
	unsigned long int previous = 0;
	unsigned long int current = 1;
	unsigned long int sum;

	while (count < 50)
	{
		sum = previous + current;
		printf("%lu", sum);

		previous = current;
		current = sum;

		if (count == 49)
		{
			printf("\n");
		}

		else
		{
			printf(", ");
		}
		count++;
	}
	return (0);
}
