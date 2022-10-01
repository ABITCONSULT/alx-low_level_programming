#include "main.h"
/**
 * _isalpha - check for alphabet in input
 *@c: the character to check if alph or not
 * Return:returns the alphabet
*/
int _isalpha(int c)
{
	if ((c <= 90 && c >= 65) || (c <= 122 && c >= 97))
		return (1);
	else
		return (0);
}
