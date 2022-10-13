#include "function_pointers.h"

/**
 * print_name - prints the name
 * @name: name to print
 * @f: function to pointer to apply
 * Return: returns void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
