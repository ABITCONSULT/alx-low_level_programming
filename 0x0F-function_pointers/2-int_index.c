#include "function_pointers.h"

/**
 * int_index - returns the index of a matching integer on a function
 * @array: array to search in
 * @size: size of the array
 * @cmp: function to act on
 * Return: the index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (cmp && array)
	{
		for (i = 0; i < size; i++)
		{
			cmp(array[i]);
			if (cmp != 0)
				return (i);
		}
	}
	return (-1);
}
