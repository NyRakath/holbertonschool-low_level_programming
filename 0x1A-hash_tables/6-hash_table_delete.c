#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: hash table to delete.
 * Return: nothing.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *head = NULL, *current = NULL;

	if (!ht || !ht->array || ht->size == 0)
		return;

	while (index < ht->size)
	{
		head = ht->array[index];
		{
			while (head)
			{
				current = head->next;
				free(head->key);
				free(head->value);
				free(head);
				head = current;
			}
		}
		index++;
	}
	free(ht->array);
	free(ht);
}
