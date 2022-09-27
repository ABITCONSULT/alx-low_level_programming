#include "main.h"

/**
 * set_string - to set the value of a pointer to a char
 * @s: source adress.
 * @to: target adress.
 * Return: nothing.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
