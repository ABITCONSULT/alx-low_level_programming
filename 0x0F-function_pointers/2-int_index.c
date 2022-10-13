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

	if (cmp && array)
	{
		for (i = 0; i < size; i++)
		{
			cmp(array[i]);
			if (cmp != NULL)
				return (i);
		}
	}
}
