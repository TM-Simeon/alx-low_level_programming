#include "main.h"
/**
 * _isalpha - search for alpha
 * @c : character to find
 * return: 0 always
 */

int _isalpha(int c)
{
	for (c = 65; c <= 122; c++)
	
		if (c > 90 && c < 96)
			return (0);
	return (1);
}
