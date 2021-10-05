#include "main.h"
/**
 * print_sign - Print + - or 0
 * Return: -1 is - 0 is 0 1 is +
 */
int print_sign(int n)
	{
		if (n < 0)
		{
		_putchar('-');
		return (-1);
		}
		else if (n == 0)
		{
		_putchar(48);
		return (0);
		}
		else
		{
		_putchar('+');
		return (1);
		}
	}
