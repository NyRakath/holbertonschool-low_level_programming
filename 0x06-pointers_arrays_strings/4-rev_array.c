#include "main.h"
/**
 * reverse_array - Reverse a string
 * @a: string in numbers
 * @n: Lengh string
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int *pointer_a = a;
	int begin = 0;
	int temp;

	n = n - 1;
	while (begin < n)
	{
		temp = *(pointer_a + begin);
		*(pointer_a + begin) = *(pointer_a + n);
		*(pointer_a + n) = temp;
		begin++;
		n--;
	}
}
