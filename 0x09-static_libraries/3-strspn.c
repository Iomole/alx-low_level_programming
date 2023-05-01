#include "main.h"
/**
 * _strspn - An entry point function
 * @s: parameter 1 (input value 1 )
 * @accept: parameter 2 (input value 2)
 * Return: zero  successful
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x = 0;
	int y;

	while (*s)
	{
		for (y = 0; accept[y]; y++)
		{
			if (*s == accept[y])
			{
				x++;
				break;
			}
			else if (accept[y + 1] == '\0')
				return (x);
		}
		s++;
	}
	return (x);
}

