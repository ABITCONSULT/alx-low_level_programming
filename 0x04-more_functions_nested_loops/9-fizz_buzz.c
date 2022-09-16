#include "main.h"
#include <stdio.h>

/**
 * main - main program to print fizzbuzz and 1-100
 *                                                                                               
 * Return:returns 0 on success
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
	if (num == 100)
		printf("Buzz");
	else  if ((num % 5 == 0) && (num % 3 == 0))
		printf("FizzBuzz ");
	else if ((num % 5 != 0) && (num % 3 == 0))
		printf("Fizz ");
	else if ((num % 5 == 0) && (num % 3 != 0))
		printf("Buzz ");
	else
		printf("%d ", num);
	}
	printf("\n");
	return (0);
}
