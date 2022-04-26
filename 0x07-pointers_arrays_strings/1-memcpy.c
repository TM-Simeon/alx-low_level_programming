#include "main.h"
/**
 * _memcpy -copy number bytes ffrom adress
 * @dest: destination of copied content
 * @src: source of data to be copied
 * @n: bytes of the memory
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
