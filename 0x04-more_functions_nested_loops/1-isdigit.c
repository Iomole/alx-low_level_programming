#include "main.h"
/**
 * _isdigit - a function that checks for a digit (0 through 9).
 * @c: parameter
 * Return: zero if lower case and 1 if upper case
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		c = 1;
	else
		c = 0;

	return (c);
}

