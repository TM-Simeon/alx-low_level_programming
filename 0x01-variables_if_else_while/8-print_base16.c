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
	char ch;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
