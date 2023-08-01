#include "lists.h"

/**
 * get_dnodeint_at_index - return the nth node of a dlistint_t linked list
 * @head: head of the list
 * @index: nth node to get
 * Return: pointer to the nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t currentIndex = 0;

	while (head != NULL)
	{
		if (currentIndex == index)
			return (head);
		head = head->next;
		currentIndex++;
	}
	return (NULL);
}
