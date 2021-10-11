#include "main.h"
/**
 * print_rev - Print in reverse a string
 * @str: string
 */

void print_rev(char *str)
{
	char *string = str;
	int TotalChar = 0;
	int Reverse;

	for (; *string; string++)
	{
		TotalChar++;
		/* printf("%c", *string);  para mostrar cada uno de los caracteres */
	}
	for (Reverse = (TotalChar - 1); Reverse >= 0; Reverse--)
	{
		_putchar(*(str + Reverse));
	}
	_putchar(10);
}
