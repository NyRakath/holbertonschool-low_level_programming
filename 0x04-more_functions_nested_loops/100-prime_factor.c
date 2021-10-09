#include "main.h"
/**
 * main - the largest prime factor of a number
 * Return: 0
 */

int main(void)
{
	long int number = 612852475143;
	long int divide = 2, maxFactor;

	while (number != 0)
	{
		if (number % divide != 0)
			divide = divide + 1;
		else
		{
			maxFactor = number;
			number = number / divide;
			if (number == 1)
			{
				printf("%ld\n", maxFactor);
				break;
			}
		}
	}
	return (0);


}
