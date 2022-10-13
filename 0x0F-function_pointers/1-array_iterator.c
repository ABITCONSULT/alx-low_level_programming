#include "function_pointers.h"

/**
 * array_iterator - performs function action on all array member
 * @array: array to perform on
 * @size: size of the array
 * @action: pointer to function to perform on array
 * Return: returns void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
	for (i = 0; i < size; i++)
		action(array[i]);
	}
}
