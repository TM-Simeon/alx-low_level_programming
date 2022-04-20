#include "main.h"
/**
 * *_strcpy - function to call
 * @dest: parameters to pass
 * @src: parameters to pass
 *
 * Return: always 0
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
