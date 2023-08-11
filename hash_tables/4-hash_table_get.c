#include "hash_tables.h"

/**
* hash_table_get - retreive a value associated with a key
* @ht: hash table
* @key: the key
* Return: value associatd with the element or null
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	char *value;
	hash_node_t *tmp;

	if (!ht || !key || !*key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];

	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			value = tmp->value;
			return (value);
		}
		tmp = tmp->next;
	}
	return (NULL);
}
