#include "main.h"

/**
 * print_alphabet - print alphabet lowercase
 *
 * Return: always 0
 */

void _putchar(char ch);
void print_alphabet(void)
{
	char c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		c++
	}
	_putchar('\n');
}
