#include "main.h"
/**
 * cap_string - Capitalizes a string
 * @str: string input
 * Return: string output
 */

char *cap_string(char *str)
{
	char specialChar[] = {' ', '\t', '\n', ',', ';', '.', '!', '?',
		'\"', '(', ')', '{', '}', '\0'};
	int recor;
	int recorito = 0;


	for (recor = 0; str[recor] != '\0'; recor++)
	{
		for (recorito = 0; specialChar[recorito]; recorito++)
		{
			if (str[recor] >= 97 && str[recor] <= 122)
			{
				if (str[recor - 1] == specialChar[recorito])
				{
					str[recor] = str[recor] - 32;
				}

			}

		}

	}
	return (str);
}
