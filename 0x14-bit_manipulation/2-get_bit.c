#include "main.h"
/**
 * get_bit - return the value of a bit at a given index
 * @n: a number
 * @index: the index if starting from the 0 place
 * Return: the value of a bit at a given index or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	else
		return ((n >> index) & 1);
}
