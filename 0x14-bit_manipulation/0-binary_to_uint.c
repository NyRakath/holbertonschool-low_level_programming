#include "main.h"
/**
* binary_to_uint - converts a binary number to an int
* @b: is pointing to a string of 0 and 1 chars
* Return: converted number, or 0
**/
unsigned int binary_to_uint(const char *b)
{
	int bit_int, result, arry_idx;

	if (b == NULL || (*b != '0' && *b != '1'))
		return (0);
	arry_idx = 0;
	/* obtain lenght of string for start in the end string*/
	arry_idx = strlen(b);
	/* subtract 1 in strlen because array start in 0*/
	arry_idx -= 1;
	for (result = bit_int = 0; arry_idx >= 0; arry_idx--)
	{
		if (*(b + arry_idx) != '0' && *(b + arry_idx) != '1')
			return (0);
		/* left shift multiplier modify */
		/* value in bit int if array contain 1 */
		/* multiply value bit */
		result += (*(b + arry_idx) - '0') * (1 << bit_int);
		bit_int += 1;
	}
	return (result);
}
