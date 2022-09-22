#include "main.h"

/**
 * _strcat - to concatenate two strings
 * @src: string to copy from
 * @dest: string to copy to
 * Return: returns dest
 */
char *_strcat(char *dest, char *src)
{

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = *src;
	return (dest);
}
