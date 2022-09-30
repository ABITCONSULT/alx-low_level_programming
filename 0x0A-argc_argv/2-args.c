#include <stdio.h>

/**
 * main - the program prints all arguments
 * @argc: the number of argument passed
 * @argv: the arguments it self
 * Return: returns 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
