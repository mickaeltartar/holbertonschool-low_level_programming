#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: head of the list
 * @str: new value for the node
 * Return: return the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int len = 0;
	list_t *new;

	if (str == NULL || head == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	while (str[len] != 0)
	{
		new->str = malloc(len + 1);
		if (new->str == NULL)
		{
			free(new);
			return (NULL);
		}
		len++;
	}
	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	while (*head)
	{
		head = &(*head)->next;
	}
	*head = new;

	return (new);
}
