#include "main.h"
/**
 * more_numbers - numbers 1 to 14
 */

void more_numbers(void)
{
	int forin, forex;

	for (forex = 0; forex < 10; forex++)
	{
		for (forin = 0; forin <= 14; forin++)
		{
			if (forin > 9)
				{
				_putchar(forin / 10 + '0');
				}
		_putchar(forin % 10 + '0');
		}
	_putchar(10);
	}
}
