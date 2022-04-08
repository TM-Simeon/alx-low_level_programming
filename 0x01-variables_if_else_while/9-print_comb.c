#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - all posible combination of single digits
 *
 * Return: 0 is always success
 */
int main(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		putchar(a);
		if (a != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
