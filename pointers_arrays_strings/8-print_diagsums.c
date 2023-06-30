#include "main.h"

/**
 * print_diagsums - print diagsums in matrix
 * @a: matrix
 * @size: size of matrix
 */

void print_diagsums(int *a, int size)
{
	int main_diag_sum = 0;
	int second_diag_sum = 0;
	int index;
	int row = 0;

	while (row < size)
	{
		index = (row * size) + row;
		main_diag_sum += a[index];
		row++;
	}

	row = 1;
	while (row <= size)
	{
		index = (row * size) - row;
		second_diag_sum += a[index];
		row++;
	}

	printf("%d, %d\n", main_diag_sum, second_diag_sum);
}
