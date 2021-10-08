#include "main.h"
/**
 * print_line - Print a line in terminal
 *
 * @n: Input number of lines to print
 */

void print_diagonal(int n)
{
	int y;
	int x;        

	if( n <= 0)
	{
		_putchar(10);
	}
	for(y= 0; y<n; y++)
	{
		for(x =1; x <= y; x++)
		{
			_putchar(' ');
		}
	_putchar(92);    
	_putchar(10); 
	}  
 
}