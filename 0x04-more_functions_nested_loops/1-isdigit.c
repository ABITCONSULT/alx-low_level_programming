#include "main.h"

/**
 * _isdigit - to check for digit
 * @c:the number to check for
 * Return:returns 1if digit and 0 if not digit
*/
int _isdigit(int c)
{
	int value;

	if ((c >= '0') && (c <= '9'))
	{
		value = 1;
	}
	else
	{
		value = 0;
	}
	return (value);
}
