#include <stdio.h>

/**
 * main - prints the program name
 * @argc: the lenght of array in argv
 * @argv: the array of command in the command
 * Return: returns zero upon success
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
