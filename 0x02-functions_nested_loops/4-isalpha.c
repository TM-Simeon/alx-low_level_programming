#include "main.h"
/**
 * _isalpha - search for alpha
 * @c : character to find
 * return: 0 always
 */

int _isalpha(int c)
{
	return ((c >=97 && c <= 122) || (c >= 65 && c<= 90));
}
