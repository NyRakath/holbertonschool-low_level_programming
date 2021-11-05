#include "variadic_functions.h"
/**
 * print_all - print any for 4 chars
 * @format: format specifier
 * Return: nothing
 */
void print_all(const char *const format, ...)
{
	va_list ap;
	char *sval, *separator = ", ";
	const char *p = format;  /* here */
	char cval;
	float fval;
	int ival;  /*here*/

	va_start(ap, format);
	while (*p)
	{
		switch (*p++)
		{
			case 'c':
				cval = (char)va_arg(ap, int);
				printf("%c", cval);
				break;
			case 'f':
				fval = va_arg(ap, double);
				printf("%f", fval);
				break;
			case 'i':
				ival = va_arg(ap, int);
				printf("%d", ival);
				break;
			case 's':
				sval = va_arg(ap, char *);
				if (!sval)
					printf("(nil)");
				printf("%s", sval);
				break;
			default:
				continue;
		}
		if (*(p))
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
