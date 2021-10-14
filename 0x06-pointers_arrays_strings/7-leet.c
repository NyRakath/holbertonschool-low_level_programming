#include "main.h"
/**
 * 
 * 
 */
char *leet(char *s)
{
	int coun1;
	int coun2;
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";

	for (coun1 = 0; *(s + coun1); coun1++)
	{
		for (coun2 = 0; coun2 <= 9; coun2++)
		{
			if (letters[coun2] == s[coun1])
				s[coun1] = numbers[coun2];
		}
	}
	return (s);
}
