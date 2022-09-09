#include <stdio.h>
/**
 *main - main is the entry point of this program size
 *
 *Return:retuns zero if no error and non-zero if error
*/
int main(void)
{
	printf("Size of a char: %ld\n", sizeof(char));
	printf("Size of an int: %ld\n", sizeof(int));
	printf("Size of long int: %ld\n", sizeof(long int));
	printf("Size of long long int: %ld\n", sizeof(long long int));
	printf("Size of a float: %ld\n", sizeof(float));
	return (0);
}
