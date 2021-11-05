#include "variadic_functions.h"
/**
 * print_all - print any for 4 chars
 * @format: format specifier
 */
void print_all(const char *const format, ...)
{
	va_list ap;
	char *sval;
	const char *p = format;
	char cval;

	va_start(ap, format);
	while (format && *p)
	{
		switch (*p++)
		{
			case 'c':
				cval = va_arg(ap, int);
				printf("%c", cval);
				break;
			case 's':
				sval = va_arg(ap, char *);
				if (!sval)
				{
					printf("(nil)");
					break;
				}
				printf("%s", sval);
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			default:
				continue;
		}
		if (*(p))
			printf(", ");
	}
	va_end(ap);
	printf("\n");
}
