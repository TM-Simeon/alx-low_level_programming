#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - all single digits of base 10
 *
 * Return: 0 is always success
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		printf("%d", num);
	}
	printf("\n");
	return (0);
}

