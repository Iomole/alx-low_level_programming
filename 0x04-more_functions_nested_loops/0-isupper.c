#include "main.h"
/**
 * _isupper - a function that checks for uppercase character.
 * @c: parameter
 * Return: zero if lower case and 1 if upper case
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		c = 1;
	else
		c = 0;

	return (c);
}
