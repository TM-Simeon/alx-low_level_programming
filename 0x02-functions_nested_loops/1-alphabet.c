#include <stdio.h>
/**
 * main - print alphabet
 *
 * Return: 0 for succes
 */
int main(void)
{
	char ch;
	ch = 'a';
	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
	return (0);
}
