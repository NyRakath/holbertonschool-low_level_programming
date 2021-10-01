#include <stdio.h>
/**
 * main - mmm
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 48; i < 103; i++)
	{
		if (i == 58)
		{
			i = 97;
		}
		putchar(i);
	}
	putchar(10);
	return (0);
}
