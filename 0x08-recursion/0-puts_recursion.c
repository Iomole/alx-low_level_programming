#include "main.h"
/**
 * _puts_recursion - A function that prints srting
 * followed by new line;
 * @s: parameter for input
 * Return: 0 is successful
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}

