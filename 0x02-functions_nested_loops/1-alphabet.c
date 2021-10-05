#include "main.h"
/**
 * print_alphabet - print
 */
void print_alphabet(void)
{
	int characterAscii = 97;

	while (characterAscii <= 122)
	{
		_putchar(characterAscii);
		characterAscii++;
	}
	_putchar(10);
}
