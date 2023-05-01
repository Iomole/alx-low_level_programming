#include "main.h"

/**
 * _islower - A function that checks for lowercase character
 * @c: parameter to check
 * Return: 1 if c is lowercase or  0 is not
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
