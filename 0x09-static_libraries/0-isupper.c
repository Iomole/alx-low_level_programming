#include "main.h"

/**
 * _isupper - A program to deternine uppercase letters
 * @c: The parameter to check for uppercase
 *
 * Return: 0 for not upper
 * and 1 for upper
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

