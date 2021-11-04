#include "variadic_functions.h"

/**
 * print_numbers - print numbers and a string ", " from array main
 * @n: number of arguments
 * @separator: array ", "
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list ap;

	if (n == 0)
		printf("\n");
	va_start(ap, n);
	for (i = 0; i < (int)n - 1; i++)
	{
		printf("%d", va_arg(ap, unsigned int));
		if (separator != NULL)
			printf("%s", separator);
	}
	printf("%d", va_arg(ap, unsigned int));
	va_end(ap);
}
