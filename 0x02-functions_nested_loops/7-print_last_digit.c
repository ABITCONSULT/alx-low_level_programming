#include "main.h"
/**
 * print_last_digit - prints the last digi of a code
 * @n: is the digit to be tested
 * Return:returns the last digit
*/
int print_last_digit(int n)
{
	int last_digit;
	
	last_digit = n % 10;
	_putchar('0' + last_digit);
	return (last_digit);
}
