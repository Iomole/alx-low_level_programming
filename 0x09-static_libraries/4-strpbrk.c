#include "main.h"
/**
 * _strpbrk - An entry point function
 * @s: parameter (input
 * @accept: parameter (input value)
 * Return: zero if  successful
 */
char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
				return (s);
		}
		s++;
	}

	return ('\0');
}

