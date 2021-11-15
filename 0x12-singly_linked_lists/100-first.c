#include <stdio.h>
/**
* beforemain - function that prints a string before main is executed,
* keyword (__attribute__)special attributes when making
* a declaration, followed by attribute specification inside double parentheses.
* source
* https://gcc.gnu.org/onlinedocs/gcc-4.3.0/gcc/Function-Attributes.html
**/
void __attribute__((constructor)) beforemain()
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
