#include "main.h"
/**
* *array_range - range of the a array from min - max
* @min: min value for array
* @max: max value for array
* Return: pointer return of malloc or null error
*/
int *array_range(int min, int max)
{
	int *poin;
	int total, i;

	if (min > max)
		return (NULL);
	total = max - min + 1;
	poin = malloc(sizeof(int) * total);
	if (poin == NULL)
		return (NULL);
	for (i = 0; min <= max ; i++)
	{
		*(poin + i) = min;
		min++;
	}
	return (poin);
}
