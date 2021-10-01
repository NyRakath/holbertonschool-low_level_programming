#include <stdio.h>
/**
 * main - mmm
 * Return:0
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i == 101)
		{
			i = i + 1;
		}
		if (i == 113)
		{
			i = i + 1;
		}
		putchar(i);
	}
	putchar(10);
	return (0);
}
