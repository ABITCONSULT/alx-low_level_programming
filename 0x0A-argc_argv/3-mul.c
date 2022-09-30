#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two arg numbers
 * @argc: the number of arguments
 * @argv: the arguments array
 * Return: returns 0 on success and  1 on error
 */
int main(int argc, char *argv[])
{
	int prod;

	if (argc == 3)
	{
		prod = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", prod);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
