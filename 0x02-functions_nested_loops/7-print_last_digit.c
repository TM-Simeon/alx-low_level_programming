#include "main.h"
/**
 * print_last_digit - print the last digit
 * @n : the integer to use
 *
 * Return: 0 always
 */
int print_last_digit(int n)
{
	int i;

	i = n % 10;
	if (i < 0)
		i = i * -1;
	_putchar(i + '0');
	return (i);
}
