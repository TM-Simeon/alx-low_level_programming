#include <stdio.h>

/**
 * main - interview question design
 *
 * Return: 0 always
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz ");
		}
		else if (i % 3 != 0 && i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i % 3 == 0 %% i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		printf("%d ", i);
	}
	printf("\n");
	return (0);
}