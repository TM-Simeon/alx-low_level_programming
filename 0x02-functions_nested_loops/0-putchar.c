#include <unistd.h>
/**
 * _putchar - print putchar 
 *
 * Return: 0 for success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
