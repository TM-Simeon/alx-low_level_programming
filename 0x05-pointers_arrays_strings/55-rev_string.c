#include "main.h"
/**
 * rev_string - function to call
 * @s: parameter to take in
 *
 * Return: always 0
 */
void rev_string(char *s)
{
	int i, j, temp, c;

	c = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		c++;
	}
	for (i = 0, j = c; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
