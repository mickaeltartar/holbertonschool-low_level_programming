#include "hash_tables.h"
/**
 * hash_table_print - print hash table
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *tmp;
	int print = 0;

	if (!ht)
		return;

	putchar('{');

	for (index = 0; index < ht->size; index++)
	{
		tmp = ht->array[index];
		while (tmp)
		{
			if (print)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			print = 1;
			tmp = tmp->next;
		}
	}
	putchar('}');
	putchar('\n');
}
