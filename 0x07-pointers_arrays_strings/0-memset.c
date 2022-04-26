#include "main.h"
/**
 * _memset - function  to call
 * @s: first parameter
 * @b: second parameter
 * @n: third parameter
 *
 * Return: always 0
 */
char *_memset(char *s, char b, unsigned int n);
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
