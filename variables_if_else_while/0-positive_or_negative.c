
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - calcul de zero
 *Return : alaways 0
 * betty style doc for fun
 * fuction main goes there
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* si n est supérieur a zéro*/
	if (n > 0)
	/*alors il est positive*/
		printf("%d is positive\n", n);
	/*sinon si n est inférieur a 0*/
	else if (n < 0)
	/* alors il est négative*/
		printf("%d is negative\n", n);
	else
	/* alors il est égal */
		printf("%d is zero\n", n);

	return (0);
}
