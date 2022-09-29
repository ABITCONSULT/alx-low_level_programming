#include "main.h"

/**
 * rev - reverse the pallin string
 * @s: the original string
 * @m: the reverse string
 * Return: returns 1 or 0 check the pallin
 */
char* rev(char *s, char *m)
{
	if (s != '\0')
	{
		rev(s + 1, m + 1);
		m = s;
	}
	return (m);
}

/**
 * is_palindrome - check if a string is a palindrome
 * @s: the string to check
 * Return: returns 1 or 0
 */
int is_palindrome(char *s)
{
	char *m;

	rev(s, m);
	if (s == m)
		return (1);
	else
		return(0);
}
