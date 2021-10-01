#include <stdio.h>
/**
 * main - mmm
 * Return: 0
 */
int main(void)
{
	int i; /*primera cifra*/
	int a; /*Segunda cifra*/

	for (i = 48; i < 58; i++)
	{
		for (a = 49; a < 58; a++)
		{
			if ((a > i) & (i > 48) || i == 48)
		{
				putchar(i);
				putchar(a);
				if (i < 56)
				{
					putchar(44);
					putchar(32);
				}
		}
		}
	}
		putchar(10);
		return (0);
}

