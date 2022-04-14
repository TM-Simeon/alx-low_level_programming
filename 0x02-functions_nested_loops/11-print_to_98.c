#include "main.h"
/**
 * print_to_98 - print from n to 98
 * @n :values read from function
 *
 * Return: 0 always
 */
void print_to_98(int n)
{
	int i = 98;

	if (n <= 98)
	{
		_putchar(n);
		_putchar(',');
		_putchar(' ');
		n++;
	}
	else if (n >= 98)
	{
		_putchar(n);
		_putchar(',');
		_putchar(' ');
		n--;
	}
