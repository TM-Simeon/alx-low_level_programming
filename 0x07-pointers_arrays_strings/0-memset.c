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
	unsinged int i;

	i = 0;
	while (i < n)
	{
		s[i] = 'b';
		i++;
	}
	return (s);
}
