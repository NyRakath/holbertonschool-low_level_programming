#include "hash_tables.h"

/**
 * key_index - Gives the index of a key.
 * @key: string used to generate the index.
 * @size: size of the array of the hash table.
 * Return: index of the key.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;
	int c;

	index = 5381;
	while ((c = *key++))
	{
		index = ((index << 5) + index) + c; /* (index * 33) + c */
	}
	index = index % size;

	return (index);
}
