#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key.
 * @ht: hash table to look into.
 * @key: key to look for.
 * Return: the key on success, NULL on failure.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *tmp = NULL;

	if (!ht)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	if (ht->array[index])
	{
		tmp = ht->array[index];
		while (tmp && strcmp(tmp->key, key) != 0)
			tmp = tmp->next;
	}

	if (!tmp)
		return (NULL);

	return (tmp->value);
}
