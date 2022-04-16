#include "main.h"

/**
 * print_times_table - entry point
 * @n: passed in values
 * 
 * Return: always 0
 */
void print_times_table(int n)
{
	int i, j, result;

	result = i * j;
	for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				_putchar(result);
				_putchar(',');
				_putchar(' ');
			}
			_putchar('\n');
		}
}
