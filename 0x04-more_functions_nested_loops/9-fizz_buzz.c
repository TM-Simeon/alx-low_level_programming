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
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Buzz ");
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
		printf("%d ", i);
		i++;
	}
	printf("\n");
	return (0);
}
