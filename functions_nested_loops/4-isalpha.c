#include "main.h"

/**
 * _isalpha - Checks si caractere alphabetique
 * @c: command c
 *
 * Return: 1 si le caractere est un emajuscule ou minuscule, sinon 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	(c >= 'a' && c <= 'z'))

		return (1);
	else
		return (0);
}
