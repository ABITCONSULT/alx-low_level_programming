#include "main.h"

/**
 * _strcmp - compares string s1 and s2
 * @s1: string to compare 1
 * @s2: string to compare 2
 * Return: returns value of difference
 */
int _strcmp(char *s1, char *s2)
{
	int value;

	while (*s1 != '\0')
	{
		if (*s1 == *s2)
		{
			value = 0;
		}
		else
		{
			value = *s1 - *s2;
			break;
		}
		s1++;
		s2++;
	}
	return (value);
}
