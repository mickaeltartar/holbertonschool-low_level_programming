#include "lists.h"

/**
 * delete_dnodeint_at_index - delete the node at index of a
 * dlistint_t linked list
 * @head: head of the list
 * @index: index of the node to delete
 * Return: 1 if success otherwise -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	size_t idx;
	dlistint_t *current, *tmp;
	dlistint_t *prevNode, *nextNode;

	if (head == NULL || *head == NULL)
		return (-1);

	for (idx = 0; *head != NULL; head = &(*head)->next, idx++)
	{
		if (idx == index)
		{
			current = *head;
			tmp = (*head)->next;

			prevNode = current->prev;
			nextNode = current->next;

			if (prevNode)
				prevNode->next = nextNode;

			if (nextNode)
				nextNode->prev = prevNode;

			free(current);
			*head = tmp;
			return (1);
		}
	}
	return (-1);
}
