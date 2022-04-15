#include "main.h"

/**
 * print_square - prints a square
 * @size: the integer to be passed
 *
 * Return: 0 always
 */
void print_square(int size)
{
	int i;

	if (size > 0)
	{
		for (size = 1; size <= n; size++)
		{
			for (i = 1; i <= size; i++)
			{
				_putchar(03);
				_putchar('\n');
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}
