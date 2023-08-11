#include "hash_tables.h"

/**
 * hash_table_delete - delete hash table
 * @ht: hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *tmp, *nextNode;

	if (ht == NULL)
	return;

	for (index = 0; index < ht->size; index++)
	{
		tmp = ht->array[index];
		while (tmp != NULL)
		{
			nextNode = tmp->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
			tmp = nextNode;
		}
	}
	free(ht->array);
	free(ht);
}
