#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocate memory using malloc
 * @b: amount of memory
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *p;
	p = malloc(sizeof(b));
	if (p == NULL)
		exit(98);
	return (p);
}
