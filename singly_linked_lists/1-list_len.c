#include "lists.h"

/**
 * list_len - return the number of element in a linked list_t list
 * @h: head of the list
 * Return: number of element
 */

size_t list_len(const list_t *h)
{
	int index = 0;

	while (h)
	{
		h = h->next;
		index++;
	}
	return (index);
}

