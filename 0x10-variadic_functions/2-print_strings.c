#include "variadic_functions.h"
/**
 * print_strings - print string and string ", " from array main
 * @n: number of arguments
 * @separator: array ", "
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list ap;
	char *stri;

	va_start(ap, n);
	for (i = 0; i < (int)n; i++)
	{
		if (separator == NULL)
		{
			printf("(nil)");
		}
		else
		{
			for (stri = va_arg(ap, char*); *stri; stri++)
				putchar(*stri);
		}
		if (separator != NULL && i != (int)n - 1)
			printf("%s", separator);
	}
	putchar(*stri);
	putchar(10);
	va_end(ap);
}
