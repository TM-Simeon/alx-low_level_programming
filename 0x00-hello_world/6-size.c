#include<stdio.h>
/**
 * main - a program that prints the size of various types on the computer
 *
 * Return: if the return value is 0, the program is correct
 */
int main(void)
{
	printf("Size of a char: %d byte(s)", sizeof(char));
	printf("Size of an int: %d byte(s)", sizeof(int));
	printf("Size of a long int: %d byte(s)", sizeof(long int));
	printf("Size of a long long int: %d byte(s)", sizeof(long long int));
	printf("Size of a float: %d byte(s)", sizeof(float));
	return (0);
}
