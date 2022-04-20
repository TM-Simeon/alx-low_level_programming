#include "main.h"
/**
 * reset_to_98 - change the value of a number
 * @*n: takes in a pointer
 *
 * Return: void
 */
void reset_to_98(int *n)
{
	*n = 98;
}
/**
 * main -entry point
 *
 * Return: 0 always
 *
int main(void)
{
	int a;
	int *p;

	p = &a;
	a = 400;
	reset_to_98(p);
	_putchar(a);

	return (0);
}*/
