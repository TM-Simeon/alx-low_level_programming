#include "main.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * Return: 0 for success
 */
int main(void)
{
	int num;
	srand(time(0));
	num = rand();
	printf("%i\n", num);
	return (0);
}
