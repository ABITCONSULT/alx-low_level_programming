#include <stdio.h>
#include <stdlib.h>

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
		if (*(argv[i]) <= 57 && *(argv[i]) >= 48)
			sum += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
