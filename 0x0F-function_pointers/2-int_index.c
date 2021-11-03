#include "function_pointers.h"

/**
 * int_index - index of position iterator from array
 * @array: source array
 * @size: size of the array into
 * @cmp: pointer of a function and recive a int
 * Return: index of the first element or -1
 **/
int int_index(int *array, int size, int (*cmp)(int))
{
	int isize;

	if ((array != NULL) && (cmp != NULL))
	{
		if (size <= 0)
			return (-1);
		for (isize = 0; isize < size; isize++)
		{
			if (cmp(*(array + isize)) != 0) /*cmp(array[isize]) != 0*/
				return (isize);
		}
	}

		return (-1);
}
