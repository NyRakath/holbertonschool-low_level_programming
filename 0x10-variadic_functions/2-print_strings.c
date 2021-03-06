#include "variadic_functions.h"
/**
 * print_strings - print string and string ", " from array main
 * @n: number of arguments
 * @separator: array ", "
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *stri;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		stri = va_arg(ap, char*);
		if (stri == NULL)
			printf("(nil)");
		else
			printf("%s", stri);
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
