#include "main.h"

/**
 * print_alphabet_x10 -print 10 times the alphabet
 *
 * return: 0 always
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
