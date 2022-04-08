#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print alphabet in lowercase
 *
 * Return: 0 always is success
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
			putchar(ch);
	}
	putchar('\n');
	return (0);
}
