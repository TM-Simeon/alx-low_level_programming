#include <stdio.h>

/**
 * main - interview question design
 *
 * Return: 0 always
 */
int main(void)
{
	int i;
	int j = 100;

	i = 1;
	while (i <= j)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			if (i < 100)
			{
			printf("Buzz ");
			}
			else
			{
			printf("Buzz");
			}
		}
		else
		{
			printf("%d ", i);
		}
		i++;
	}
	printf("\n");
	return (0);
}
