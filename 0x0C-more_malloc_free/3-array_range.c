#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - malloc array for number min to max
 * @min: minimum number to start from
 * @max: maximum number to end with
 * Return: return pointer to the array created
 */
int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
		return (NULL);

	array = malloc((max - min + 1) * sizeof(int));

	if (array == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		array[i] = min;
	return (array);
}
