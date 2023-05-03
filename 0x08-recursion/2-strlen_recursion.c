#include "main.h"
/**
 * _strlen_recursion - A function that returns the length of a string.
 * @s: parameter for string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int lstr = 0;

	if (*s)
	{
		lstr++;
		lstr += _strlen_recursion(s + 1);
	}

	return (lstr);
}

