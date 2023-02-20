#include <stdio.h>

/**
 * main - Tout les nombres base 16 écrit en petit.
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;
	char lettre;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (lettre = 'a'; lettre <= 'f'; lettre++)
		putchar(lettre);

	putchar('\n');

	return (0);
}
