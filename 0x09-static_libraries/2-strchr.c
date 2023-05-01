#include "main.h"
#include <stddef.h>

/**
 * _strchr - An entry point function
 * @s: parameter (input 1)
 * @c: parameter (input 2)
 * Return: Zero if  Successful
 */
char *_strchr(char *s, char c)
{
	int x = 0;

	for (; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (&s[x]);
	}
	return (0);
}
