#include <stdio.h>
#include "main.h"
/**
 * main - print the  arguments passed to main
 * @argc: count arguments
 * @argv: arguments
 *
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int count = 0;

	if (argc > 0)
	{
		while (count < argc)
		{
			printf("%s\n", argv[count]);
			count++;
		}
	}
	return (0);
}
