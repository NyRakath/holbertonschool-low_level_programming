#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: hash table to print.
 * Return: nothing.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *tmp = NULL;
	int node_next = 0;

	if (!ht)
		return;

	printf("{");

	while (index < ht->size)
	{
		tmp = ht->array[index];
		while (tmp)
		{
			if (node_next > 0)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			node_next++, tmp = tmp->next;
		}
		index++;
	}

	printf("}\n");
}
