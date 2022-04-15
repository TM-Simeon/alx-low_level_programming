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
	int k;

	if (size > 0)
	{
		for (k = 0; k < size; k++)
		{
			for (i = 0; i < size; i++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
