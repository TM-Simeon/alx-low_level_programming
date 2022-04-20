#include "main.h"
/**
 * swap_int - swap two integers
 * @a: first integer to swap
 * @b: second integer to swap
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
