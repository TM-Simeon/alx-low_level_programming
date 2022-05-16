#include "variadic_functions.h"

/**
 * sum_them_all - find the sum of all arguments
 * @n: number of arguments passed to the function
 *
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
	{
		return (0);
	}

	unsigned int i;
	int sum = 0;

	va_list list;

	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}
	va_end(list);

	return (sum);
}
