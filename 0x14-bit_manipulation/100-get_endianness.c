#include "main.h"
/**
 * get_endianness - get big or little endian architecture
 * Return: 1 if is little endian or 0 if is big endian
 */
int get_endianness(void)
{
	int x = 1;
	char *y;

	y = (char *)&x;
	if (*y)
		return (1);
	return (0);
}
