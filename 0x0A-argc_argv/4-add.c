#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - programms that adds all integer arguments
 * @argc: number of arguments
 * @argv: the arguments in array
 * Return:r returns 0 on success and 1 on error
 */
int main(int argc, char *argv[])
{
	int i = 1, sum = 0;

	for (; i < argc; i++)
	{
		while (*(argv[i]) != '\0')
		{
		if (!isdigit(*(argv[i])))
		{
			printf("Error\n");
			return (1);
		}
		argv[i]++;
		}
	sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
