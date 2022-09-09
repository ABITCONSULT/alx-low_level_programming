#include <stdio.h>
/**
 *main - main is the entry point of this program size
 *
 *Return:retuns zero if no error and non-zero if error
*/
int main(void)
{
	printf("Size of a char: %ld\n", sizeof(char), "byte(s)");
	printf("Size of an int: %ld\n", sizeof(int), "byte(s)");
	printf("Size of long int: %ld\n", sizeof(long int), "byte(s)");
	printf("Size of long long int: %ld\n", sizeof(long long int), "byte(s)");
	printf("Size of a float: %ld\n", sizeof(float), "byte(s)");
	return (0);
}
