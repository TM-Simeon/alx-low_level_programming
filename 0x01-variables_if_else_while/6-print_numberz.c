#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print all single digit numbers
 *
 * Return: 0 is always a success
 */
int main(void)
{
	int ch;

	for (ch = 48; ch < 58; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
