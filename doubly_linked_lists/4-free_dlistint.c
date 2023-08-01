#include "lists.h"

/**
 * free_dlistint - free a dlistint_t list
 * @head: head of the list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *nextNode;

	while (head != NULL)
	{
		nextNode = head->next;
		free((void *)head);
		head = nextNode;
	}
}
