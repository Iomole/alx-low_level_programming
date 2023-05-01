#include "main.h"

/**
 * _isalpha - A function that checks
 * for alphabetic characters
 * @c: parameter (the checked value)
 * Return: 1 if c is an alphabet,&  0 if not
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

