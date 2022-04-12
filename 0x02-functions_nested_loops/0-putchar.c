#include <unistd.h>
#include "main.h"
/**
 * _putchar - print putchar 
 * @c: the character to print
 *
 * Return: 1 for success
 * on error, -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
