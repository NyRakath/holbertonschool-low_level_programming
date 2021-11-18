#include "main.h"
/**
* print_binary - prints the binary representation of a number
* @n: number to be represented
* Return: nothing
**/
void print_binary(unsigned long int n)
{
	if (n == 1)
		_putchar('1');
	if (n == 0)
		_putchar('0');
	if (n > 1)
	{
		print_binary(n >> 1);
		((n & 1) != 0) ? _putchar('1') : _putchar('0');
	}
}
