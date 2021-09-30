#include <stdio.h>
/**
 * main - Prinf varius size of types
 * Return:0
 */
int main(void)
{
	int intType;
	float floatType;
	char charType;
	long int longinitType;
	long long int longlonginitType; 

	printf("Size of char: %i byte(s)\n", sizeof(longlonginitType));
	printf("Size of int: %i byte(s)\n", sizeof(intType));
	printf("Size of float: %i byte(s)\n", sizeof(floatType));
	printf("Size of double: %i byte(s)\n", sizeof(longinitType));
	printf("Size of char: %i byte(s)\n", sizeof(charType));
	return (0);
}
