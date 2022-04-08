#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - program that prints the alphabet in lowercase, following by a new line
 *
 * Return: return value of 0 indicates success
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

