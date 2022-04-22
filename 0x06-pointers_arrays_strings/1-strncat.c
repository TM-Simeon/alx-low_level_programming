#include "main.h"
/**
 * _strncat - called function
 * @dest: first passed value
 * @src: second passed value
 * @n: third passed value
 *
 * Return: always 0
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
