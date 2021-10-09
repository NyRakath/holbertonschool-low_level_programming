#include "main.h"
/**
 * print_number - print a number long with putchar
 * @n: into any number
 */

void print_number(int n)
{
	int last_digit, reversedn;

	if (n < 0)
	{
		_putchar('-');
		last_digit = ('0' - (n % 10));
		n /= -10;
	}
	else
	{
		last_digit = ((n % 10) + '0');
		n /= 10;
	}
	reversedn = 0;
	for (; n > 0;)
	{
		reversedn = ((reversedn * 10) + (n % 10));
		n /= 10;
	}
	for (; reversedn > 0;)
	{
		int d = ((reversedn % 10) + '0');

		_putchar(d);
		reversedn /= 10;
	}
	_putchar(last_digit);
}


