#include "main.h"
/**
 * print_alphabet_x10 - print alphabet x10
 */
void print_alphabet_x10(void)
{
	int newLine = 0;

	while (newLine < 10)
	{
		int characAscii = 97;

		while (characAscii <= 122)
		{
		_putchar(characAscii);
		characAscii++;
		}
		_putchar(10);
		newLine++;
	}
}

