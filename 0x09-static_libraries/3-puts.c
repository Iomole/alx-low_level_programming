#include "main.h"
/**
 * _puts - A function to print a string value,
 * followed by a new line.
 * @s: parameter (string to print)
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s++);
	}
	_putchar('\n');
}

