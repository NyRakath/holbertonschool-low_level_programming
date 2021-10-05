#include "main.h"
/**
 * jack_bauer - Clock from 00:00 of 23:59
 */
void jack_bauer(void)
{
	int minutesLeft;
	int minutesRight;
	int hoursLeft;
	int hoursRight;

	for (hoursLeft = 0; hoursLeft <= 2; hoursLeft++)
	{
		for (hoursRight = 0; hoursRight <= 9; hoursRight++)
		{
			for (minutesLeft = 0; minutesLeft < 6; minutesLeft++)
			{
				for (minutesRight = 0; minutesRight <= 9; minutesRight++)
				{
					if ((hoursRight <= 3) & (hoursLeft == 2) || hoursLeft < 2)
					{
					_putchar(hoursLeft + '0');
					_putchar(hoursRight + '0');
					_putchar(':');
					_putchar(minutesLeft + '0');
					_putchar(minutesRight + '0');
					_putchar(10);
					}
				}
			}
		}
	}
}

