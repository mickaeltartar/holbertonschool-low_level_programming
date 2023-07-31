#include "lists.h"

/**
 * dlistint_len - number if element in a linked dlistint_t list
 * @h: head of the linked list
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t elements;

	for (elements = 0; h != NULL; h = h->next, elements++)
		;

	return (elements);
}
