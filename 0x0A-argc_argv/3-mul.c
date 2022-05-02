#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - prints the multiplication of two integers
 * @argc: argument count
 * @argv: arguments
 * Return: 0 for success
 */
int main (int argc, char *argv[])
{
	int a, b;
	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
		return (0);
	}
	printf("Error\n");
	return (1);
}
