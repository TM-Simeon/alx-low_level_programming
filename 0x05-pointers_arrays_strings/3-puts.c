#include "main.h"
/**
 * _puts - called function
 * @str: arguments to take
 *
 * Return: always 0
 */
void _puts(char *str)
{
	int i;

	for (i = 0; *str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
}
