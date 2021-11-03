#include "function_pointers.h"

/**
 * print_name - print name with pointer function
 * @name: into name of a person
 * @f: is a pointer of a function callback again
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
