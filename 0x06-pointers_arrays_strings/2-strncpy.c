#include "main.h"
/**
 * _strncpy - passed function
 * @dest: destination string
 * @src: source string
 * @n: character number to copy
 *
 * Return: always 0
 */
car *_strncpy(char *dest, char *src, int n);
{
	int i, j;

	i = 0;
	j = 0;
	while (i < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
