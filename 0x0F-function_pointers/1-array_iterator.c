#include "function_pointers.h"

/**
 * array_iterator - print each element of a array from pointer function
 * @array: source array
 * @size: size of the array into
 * @action: pointer of a function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int iterator;

	if (action)
	{
		iterator = 0;
		while (iterator < (int)size)
			action(*(array + iterator));
	}
}
