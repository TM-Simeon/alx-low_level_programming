#include <stdio.h>
#include "main.h"
/**
 * main - print the number of arguments passed into a program
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%i\n", argc - 1);

	return (0);
}
