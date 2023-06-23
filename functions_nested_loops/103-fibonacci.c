#include <stdio.h>

/**
 * main - print Each new term in the fibo sequence by the previous
 * Return: 0
 */

int main(void)
{
	int num0 = 1;
	int num1 = 2;
	int num2 = 3;
	int result;

	while (num1 <= 4000000)
	{
		if (num1 % 2 == 0)
		{
			result = result + num1;
		}
		num0 = num1;
		num1 = num2;
		num2 = num0 + num1;
	}
	printf("%d\n", result);
	return (0);
}
