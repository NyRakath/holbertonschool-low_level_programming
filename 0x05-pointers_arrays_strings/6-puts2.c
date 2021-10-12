#include "main.h"
/**
 * puts2 - Print one yes one no
 * @str: Input
 * Return: no return.
 */
void puts2(char *str)
{
	int charc;

	for (charc = 0; *(str + charc); charc++)
	{
		if (charc % 2 == 0)
		{
			_putchar(*(str + charc));
		}
	}
	_putchar(10);
}
