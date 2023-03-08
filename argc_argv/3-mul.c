#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies 2 integers
 * @argc: argument counter
 * @argv: argumet mult
 *
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int num1, num2, prod;
	int *ptr1, *ptr2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	ptr1 = &num1;
	ptr2 = &num2;

	*ptr1 = atoi(argv[1]);
	*ptr2 = atoi(argv[2]);

	prod = *ptr1 * (*ptr2);

	printf("%d\n", prod);

	return (0);
}
