#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: hash table to add.
 * @key: key to add.
 * @value: value associated to the key.
 * Return: 1 if success, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *node_at_index = NULL;

	if (!ht || !key || !value || *key == '\0')
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	node_at_index = ht->array[index];

	/* Check if the key is at index to replace the value */
	while (node_at_index)
	{
		if (strcmp(key, node_at_index->key) == 0)
		{
			free(node_at_index->value);
			node_at_index->value = strdup(value);
			return (1);
		}
		node_at_index = node_at_index->next;
	}

	/* Add the key if it's not at index as node at the beginning */
	node_at_index = malloc(sizeof(hash_node_t));
	if (!node_at_index)
		return (0);

	node_at_index->key = strdup(key);
	node_at_index->value = strdup(value);

	if (ht->array[index] != NULL)
		node_at_index->next = ht->array[index];

	ht->array[index] = node_at_index;

	return (1);
}
