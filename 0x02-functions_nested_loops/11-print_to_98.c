#include "main.h"

/**
 * print_to_98 - print 98
 * @n: value ingr
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d", n);
		printf(", ");
		n++;
	}
	while (n > 98)
	{
		printf("%d", n);
		printf(", ");
		n--;
	}
	printf("%d", 98);
	printf("\n");
}
