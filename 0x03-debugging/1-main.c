#include <stdio.h>

/**
 * main - causes an infinite loop
 * Return: 0
*/

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;
	/**
	* while (i < 10)
	* {
	* putchar(i);
	* } no increment for i so i will always be < 10
	*/
	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
