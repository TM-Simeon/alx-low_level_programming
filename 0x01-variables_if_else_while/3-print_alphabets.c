#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - lower and upper case alphabet
 *
 * Return: 0 is always success
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n);
	return (0);
}
