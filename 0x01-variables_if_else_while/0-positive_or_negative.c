#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/** 
 * main - to check a random number, if its positive or negative
 *
 * Return: zero means success
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n>0)
		printf("%d is possitive\n", n);
	else if(n<0)
		printf("%d is negative\n", n);
	else
		printf("%d is equal to 0\n", n);
	return (0);
}
