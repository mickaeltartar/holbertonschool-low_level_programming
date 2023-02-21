#include "main.h"

/**
 * jack_bauer - fonction qui imprime chaque minute
 * h = heure, m = min
 * /10 permet au second chiffre de tourner
 * la boucle for s'interrompt avant de passer 24 h
 */

void jack_bauer(void)
{
	int h, m;

	for (h = 0 ; h < 24; h++)
	{
		for (m = 0 ; m < 60; m++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
	}
}
