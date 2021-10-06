#include "main.h"
/**
 * jack_bauer - Clock from 00:00 of 23:59
 */
void times_table(void)
{
	int digit1, digit2, result; 

	for (digit1 = 0; digit1 < 10; digit1++) 
	{
		_putchar(48);
		for (digit2 = 1; digit2 < 10; digit2++)
		{
		result = digit1 * digit2;
		_putchar(44);
		_putchar(32);
			if (result <= 9)
			{
			_putchar(32);
			_putchar(result + 48);	/* code */
			}
			else
			{
			_putchar((result/10) + 48);
			_putchar((result%10) + 48);
			}
		
		}
		putchar(10);
	}
	
}

	