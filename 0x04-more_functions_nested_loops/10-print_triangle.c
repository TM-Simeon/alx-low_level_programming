#include <main.h>

/**
 * print_triangle - print a triangle
 * @size: passed value
 *
 * Return: 0 always
 */
void print_triangle(int size)
{
	int i, j, k, l;

	j = size - 1;
	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (k = j; k > 0; k--)
			{
				_putchar(' ');
			}
			for (l = 0; l < i; l++)
			{
				_putchar(35);
			}
			j--;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
