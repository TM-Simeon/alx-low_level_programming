#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - different combination of three digits
 *
 * Return: 0 is always success
 */
int main(void)
{
	int n, m, x;

	for (n = 48; n < 58; n++)
	{
		for (m = 49; m < 58; m++)
		{
			for (x = 50; x < 58; x++)
			{
				if (x > m && m > n)
				{
					putchar(n);
					putchar(m);
					putchar(x);
					if (n != 55 || m != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
