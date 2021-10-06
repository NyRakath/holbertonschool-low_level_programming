#ifndef MAIN_HEADER
#define MAIN_HEADER
/*Define libraries*/
#include <unistd.h>
#include <stdio.h>
/* Print char */
int _putchar(char c);
/* Print all alphabet */
void print_alphabet(void);
/* Print all alphbet x10 */
void print_alphabet_x10(void);
/*Checks for lowercase character*/
int _islower(int c);
/*checks for alphabetic character.*/
int _isalpha(int c);
/*Print sign*/
int print_sign(int n);
/*Absolute value of an integer*/
int _abs(int n);
/*Prints the last digit of a number*/
int print_last_digit(int number);
/*Prints every minute of the day*/
void jack_bauer(void);
/*Adds two integers and returns the result*/
int add(int, int);
/*prints all natural numbers from n to 98*/
void print_to_98(int n);
/*prints the 9 times table, starting with 0.*/
void times_table(void);
#endif /*MAIN_HEADER*/
