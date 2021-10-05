#include "main.h"
/**
 * print_last_digit - Print last digit of number
 * @n: value n
 * Return: n value of last digit
 */
int print_last_digit(int number)
{
	number = number % 10;
	if (number < 0)
	{
	number = number * -1;
	}
	_putchar(number + 48);
	return (number);
}
