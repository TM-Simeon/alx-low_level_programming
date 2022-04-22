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
	strncpy(dest, src, n);
	return (dest);
}
