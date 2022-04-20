#include "main.h"
/**
 * _strlen - called function
 * @s: passed parameter
 *
 * Return: always 0
 */
int _strlen(char *s)
{
	int c = 0;

	while(*s != '\0')
	{
		c++;
		s++;
	}

	return (c);
}
