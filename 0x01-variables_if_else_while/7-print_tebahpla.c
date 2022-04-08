#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints lowercase alphabet in reverse
 *
 * Return: 0 is always success
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
