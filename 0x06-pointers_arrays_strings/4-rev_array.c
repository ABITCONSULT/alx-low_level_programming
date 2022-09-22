#include "main.h"

/**
 * reverse_array - reverses the integer array
 * @a: is the array to reverse
 * @n: is the number of element in the array
 * Return: returns void
 */
void reverse_array(int *a, int n)
{
int i, j, k;

for (i = 0; i < n - 1; i++)
{
	for (j = i + 1; j > 0; j--)
	{
		k = *(a + j);
		*(a + j) = *(a + (j - 1));
		*(a + (j - 1)) = k;
	}
}
}
