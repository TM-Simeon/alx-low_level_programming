#include "main.h"
/**
 * _strcmp - called function
 * @s1: parameter one
 * @s2: parameter two
 *
 * Return: always 0
 */
int _strcmp(char *s1, char *s2)
{
	char *str_one = s1;
	char *str_two = s2;

	while (*str_one != '\0' && *str_two != '\0' && *str_one == *str_two)
	{
		str_one++;
		str_two++;
	}
	return (*str_one - *str_two);
}
