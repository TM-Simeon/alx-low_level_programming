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
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return dest;
}
