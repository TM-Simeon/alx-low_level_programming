#include "main.h"
/**
 * _strncpy - passed function
 * @dest: destination string
 * @src: source string
 * @n: character number to copy
 *
 * Return: always 0
 */
char *_strncpy(char *dest, char *src, int n);
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while ( i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
