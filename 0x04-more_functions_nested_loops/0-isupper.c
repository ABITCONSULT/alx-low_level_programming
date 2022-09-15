#include "main.h"

/**
 * _isupper - checks for uppercase in a word
 * @c: the character to check for
 * Return:returns 1 if uppercase
*/
int _isupper(int c)
{
	int value;

	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
