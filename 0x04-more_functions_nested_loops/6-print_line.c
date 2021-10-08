#include "main.h"
/**
 * print_line - Print a line in terminal
 *
 * @n: Input number of lines to print
 */

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar(10);
}

