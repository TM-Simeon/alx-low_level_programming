#include "main.h"

/**
 * more_numbers - print 10 times the numbers
 *
 * Return: 0 always
 */
void more_numbers(void)
{
	int i, j;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j <= 14)
		{
			_putchar(j + '0');
			j++;
		}
		_putchar('\n');
		i++;
	}
	_putchar('\n');
}
