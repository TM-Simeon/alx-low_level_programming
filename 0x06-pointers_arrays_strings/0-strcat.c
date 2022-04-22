#inlclude "main.h"
/**
 * _strcat - called function
 * @dest: passed parameter 1
 * @src: passed parameter 2
 *
 * Return: 0 always
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
