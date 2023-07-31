#include "lists.h"

/**
 * add_dnodeint - add a new node at the beginning of a dlistint_t list
 * @head: head of the list
 * @n: value of the new node
 * Return: pointer to the new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	if (head == NULL)
		return (NULL);

	newNode = malloc(sizeof(dlistint_t));
		if (newNode == NULL)
			return (NULL);

	newNode->prev = NULL;
	newNode->next = *head;
	newNode->n = n;

	if (*head)
		(*head)->prev = newNode;

	*head = newNode;

	return (newNode);
}
