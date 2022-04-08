#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print all numbers of base 16 in lowercase
 *
 * Return: 0 is always a success
 */
int main(void)
{
	int n;

	for (n = 0; n < 16; n++)
	{
		putchar(%x);
	}
	putchar('\n');
	return (0);
}
