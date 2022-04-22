#include "main.h"
/**
 * reverse_array - called function
 * @a: passed value 1
 * @n: passed value 2
 *
 * Return: always 0
 */
void reverse_array(int *a, int n)
{
	int i, j;
	int array2[n];

	for (i = n - 1, j = 0; i >= 0; i--, j++)
	{
		array2[j] = a[i];
	}
}
