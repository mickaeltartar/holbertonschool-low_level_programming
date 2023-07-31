#include "lists.h"

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
