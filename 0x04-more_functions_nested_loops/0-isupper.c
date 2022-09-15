#include <stdio.h>
/**
 * _isupper - checks for uppercase in a word
 * @c: the character to check for.
 * Return:returns 1 if uppercase
*/
int _isupper(int c)
{
	int value;

	if (c >= 65 && c <= 90)
		value = '1';
	else 
		value = '0';
	return (value);
}
