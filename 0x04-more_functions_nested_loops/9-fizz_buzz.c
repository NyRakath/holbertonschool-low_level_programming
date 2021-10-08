#include "main.h"
/**
 * main - Print a sqare an equals dimensions height and weight
 * Return: 0
 */
int main(void)
{
	int i = 1;

	for (; i <= 100; i++)
	{
		if (i < 100)
		{
			printf(" ");
		}
		if (i % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
	}
	printf("\n");
	return (0);
}
