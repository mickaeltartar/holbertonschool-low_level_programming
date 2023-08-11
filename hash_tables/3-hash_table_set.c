#include "hash_table.h"

/**
 * 
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_table_t, *newNode, *tmp;

	if (!ht || !key || !*key || !value)
	return (0);

	index = key_index((const unsigned char *) key, ht->size);
	tmp = ht->array[index];

	while(tmp)
	{
		if(!strcmp (key, tmp->key))
		{
			free(tmp->value);
			tmp->value = strdup(value);
				if (!tmp->value)
				return (0);
			return (1)
		}
		tmp = tmp->next;
	}
	newNode = malloc(sizeof(hash_table_t));
	if (newNode == 0)
		return (0);
	newNode->value = strdup(value);
	if (newNode->value == 0)
	{
		free(newNode);
		free(newNode->key);
		return(0);
	}
	newNode->next = ht->array[index];
	ht->array[index] = newNode;
	return(1)
}