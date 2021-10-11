#include "main.h"
/**
 * _puts - function puts with putchar
 * @str: string
 */

void _puts(char *str)
{
	int recorr = 0;

	for (; *str != '\0'; recorr++)
	{
		_putchar(*str);
		str++;
	}
	_putchar(10);
}
