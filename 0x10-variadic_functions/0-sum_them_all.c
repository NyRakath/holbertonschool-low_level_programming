#include "variadic_functions.h"

/**
 * sum_them_all - sum all paramaters from main
 * @n: number of arguments
 * Return: Sum of numbers from array with va_arg
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i, sum;

	if (n == 0)
		return (0);
	va_start(ap, n);
	sum = i = 0;
	for (; i < (int)n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
