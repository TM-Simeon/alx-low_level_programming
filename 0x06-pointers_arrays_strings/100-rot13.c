#include "main.h"
/**
<<<<<<< HEAD
 * rot13 - encodes a string
 * @s: input string
 *
 * Return: the pointer to dest
 */
char *rot13(char *s)
{
	int count = 0, i;

	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

		while (*(s + count) != '\0')
		{
			for (i = 0; i < 52; i++)
			{
				if (*(s + count) == alphabet[i])
				{
					*(s + count) = rot13[i];
					break;
				}
			}
			count++;
		}
=======
 * rot13 - encodes a strings using rot13
 * @s: imput string.
 * Return: the pointer to dest.
 */

char *rot13(char *s)
{
	int count = 0, i;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + count) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(s + count) == alphabet[i])
			{
				*(s + count) = rot13[i];
				break;
			}
		}
		count++;
	}
>>>>>>> 8f50f758f4b81567d1f220e1f1cf0753f42ae2e3
	return (s);
}
