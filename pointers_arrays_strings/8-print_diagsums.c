#include "main.h"
#include <stdio.h>

/**
  * print_diagsums - Print the sum of two diagonals of square matrix
  *
  * @a: the matrix
  * @size: the size
  *
  * Return: Nothing.
  */

void print_diagsums(int *a, int size)
{

	int diag = 0;
	int diag0 = 0;
	int index;
	int *p1 = a;
	int *p2 = a + size - 1;

	for (index = 0; index < size; index++)
	{
		diag += *p1;
		diag0 += *p2;

		p1 += size + 1;
		p2 += size - 1;
	}
	printf("%d, %d\n", diag, diag0);
}
