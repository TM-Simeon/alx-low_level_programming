#include <stdio.h>

/**
 * main - interview question design
 *
 * Return: 0 always
 */
int main(void)
{
	int i = 1;
	int j = 100;

	while (i <= j)
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
		i++;
	}
	printf("\n");
	return (0);
}
