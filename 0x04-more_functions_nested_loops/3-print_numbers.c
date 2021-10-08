#include "main.h"
/**
 * print_numbers - 0 at 9 numbers
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar(10);
}
