#include "main.h"

/**
 * print_number - entry point
 * @n: passed in value
 * Return: always 0
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		_putchar(n);
	}
	else
	{
		_putchar(n);
	}
}
