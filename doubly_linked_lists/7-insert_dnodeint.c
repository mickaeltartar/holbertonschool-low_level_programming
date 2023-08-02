#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a newNode node at a given position
 * @h: head of the list
 * @idx: position for insert the newNode node
 * @n: value of the node
 * Return: pointer to the newNode node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *actual;
	unsigned int index;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	actual = *h;

	for (index = 0; actual && index < idx; index++)
		actual = actual->next;

	if (!actual && index == idx)
		return (add_dnodeint_end(h, n));

	else if (actual)
	{
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);

		new->n = n;
		actual->prev->next = new;
		new->prev = actual->prev;
		actual->prev = new;
		new->next = actual;
		return (new);
	}
	return (NULL);
}

