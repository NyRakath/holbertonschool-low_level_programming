#include "main.h"
/**
 * set_bit - set the value of a bit to 1 at a given index
 * @n: a number
 * @index: the index to change to 1
 *
 * Return: 1 if the bit at the given index is 1 or -1 if it fails
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	/* *n |= (1 << index); */
	*n = *n | (1 << index);
	return (1);
}
