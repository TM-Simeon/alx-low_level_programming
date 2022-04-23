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
	int i, j;

	i = 0;
	j = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	while ( i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
