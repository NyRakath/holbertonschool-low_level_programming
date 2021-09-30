#include <stdio.h>
/**
 * main - Prinf varius size of types
 * Return:0
 */
int main(void)
{
	int intType;
	float floatType;
	double doubleType;
	char charType;
	long long int longlonginitType; 

	printf("Size of char: %i bytes\n", sizeof(longlonginitType));
	printf("Size of int: %i bytes\n", sizeof(intType));
	printf("Size of float: %i bytes\n", sizeof(floatType));
	printf("Size of double: %i bytes\n", sizeof(doubleType));
	printf("Size of char: %i byte\n", sizeof(charType));
	return (0);
}
