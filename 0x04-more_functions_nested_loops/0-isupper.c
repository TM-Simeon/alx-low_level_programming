#include "main.h"

/**
 * _isupper - check for upper case
 * @c: character to take in
 *
 * Return: 0 always
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
