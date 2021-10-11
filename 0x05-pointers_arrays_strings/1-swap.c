#include "main.h"
/**
 * swap_int - Change value of *p1 and *p2
 * @p1: Pointer 1
 * @p2: Pointer 2
 */

void swap_int(int *p1, int *p2)
{
	int a = *p1;

	*p1 = *p2;
	*p2 = a;
}
