#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: always 0
 */
int main()
{
	char s1[98];
	char *ptr;
	int i;

	for (i = 0; i < 98 - 1; i++)
	{
		s1[i] = '*';
	}
	s1[i] = '\0';
	printf("%s\n", s1);
	ptr = _strncpy(s1, "first, solve the problem, then, write the code\n", 5);
	printf("%s\n", s1);
	printf("%s\n", ptr);
	ptr = _strncpy(s1, "first, solve the problem, then write the code\n", 90);
	printf("%s", s1);
	printf("%s", ptr);

	return (0);
}
