#include "lists.h"

/**
 * print_list - print all the element of a list_t list
 * @h: head of the list
 * Return: the numbers of elements
 */

size_t print_list(const list_t *h)
{
	int index = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h)
	{
		printf("[%u] %s\n", (h->str != NULL) ? h->len : 0,
				(h->str != NULL) ? h->str : "(nil)");
		h = h->next;
		index++;

	}

		return (index);
}
