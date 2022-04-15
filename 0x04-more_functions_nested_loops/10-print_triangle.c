#include "main.h"
/**
 * print_triangle - prints triangle
 * @size: print size
 * Return: always 0
 */

void print_triangle(int size)
{
	int b;
	int h;

	if (size < 1)
	{
		_putchar('\n');
	}
	for (b = 1; b <= size; b++)
	{
		for (h = 0; h < size; h++)
		{
			if (size - h <= b)
				_putchar(35);
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
}
