#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print from n to 98
 * @n :values read from function
 *
 * Return: 0 always
 */
void print_to_98(int n)
{
	int i = 98;

	if (n <= i)
	{
		printf("%i, ", n);
		n++;
	}
	else if (n >= i)
	{
		printf("%i, ", n);
		n--;
	}
	putchar('\n');
}
