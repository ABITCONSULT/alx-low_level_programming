#include "main.h"
#include <stdio.h>

/**
 * print_array - prints array of number n
 * @a: the array to print
 * @n: number of array to print
 * Return: returns void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
			printf("%d\n", a[i]);
		else
			printf("%d, ", a[i]);
	}
}
