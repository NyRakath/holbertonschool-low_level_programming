#include "main.h"
/**
 * print_triangle - Print a triangle inverse
 * @size: size of triangle inverse
 */

void print_triangle(int size)
{
	int y = 0, x = 0;

	if (size <= 0)
	{
		printf("\n");
	}
	for (y = 1; y <= size; y++)
	{
		for (x = 1; x <= size; x++)
		{
			if (x <= size - (y))
			{
				printf(" ");
			}
			else
			{
				printf("#");
			}
		}
		printf("\n");
	}
}
