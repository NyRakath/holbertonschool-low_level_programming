#include "main.h"
/**
 * print_square - Print a sqare an equals dimensions height and weight
 * @size: size of square
 */

void print_square(int size)
{
	int y, x;

	if (size <= 0)
	{
		putchar(10);
	}
	for (y = 0; y < size; y++)
	{
		for (x = 0; x < size; x++)
		{
			_putchar('#');
		}
		_putchar(10);
	}
}
