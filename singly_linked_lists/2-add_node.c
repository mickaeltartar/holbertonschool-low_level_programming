#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: head of the list
 * @str: the new value for the node
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
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
	new->next = *head;
	*head = new;

	return (new);
}

