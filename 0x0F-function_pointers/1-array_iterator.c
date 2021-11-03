#include "function_pointers.h"

/**
 * array_iterator - print each element of a array from pointer function
 * @array: source array
 * @size: size of the array into
 * @action: pointer of a function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int iterator;

	if (action && array && size)
	{
		iterator = 0;
		while (iterator < size)
		{
			action(*(array + iterator));
			iterator++;
		}
	}
}
