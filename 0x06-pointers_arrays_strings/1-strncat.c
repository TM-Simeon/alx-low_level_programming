#include "main.h"
/**
 * _strncat - prototype function
 * @dest: first array passed
 * @src: second array passed
 * @n: passed integer
 *
 * Return: always 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		if (j >= n)
		{
			break;
		}
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
