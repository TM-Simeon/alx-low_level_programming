#include "main.h"
/**
 * puts_half - print half a string
 * @str: takes in argument
 *
 * Return: 0 always
 */
void puts_half(char *str)
{
	int i, x;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	x = (i + 1) / 2;
	for (i = x; str[i]; i++)
	{
		_putchar (str[i]);
	}
	_putchar('\n');
}
