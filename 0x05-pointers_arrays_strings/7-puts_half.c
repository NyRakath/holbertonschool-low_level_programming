#include "main.h"
/**
 * puts_half - print half of a string
 * @str: Input of the string
 * Return: 0
 */
void puts_half(char *str)
{
	int coun = 0;

	while (*(str + coun))
	{
		coun++;
	}
	if (coun % 2 == 0)
	{
		coun = coun / 2;
	}
	else
	{
		coun = (coun - 1) / 2;
		coun++;
	}
	while (*(str + coun) != ('\0'))
	{
		_putchar(*(str  + coun));
		coun++;
	}
	_putchar(10);
}
