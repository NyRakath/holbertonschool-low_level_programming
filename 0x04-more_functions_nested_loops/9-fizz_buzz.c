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
		if (i < 100)
		{
			prinf(" ")
		}
	}
	printf("\n");
	return (0);
}
