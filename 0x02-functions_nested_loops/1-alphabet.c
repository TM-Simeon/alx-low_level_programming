#include "main.h"

/**
 * print_alphabet - print alphabet lowercase
 *
 * Return: always 0
 */

char _putchar(char ch);
char print_alphabet(void);
int main(void)
{
	char c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
	return (0);
}
