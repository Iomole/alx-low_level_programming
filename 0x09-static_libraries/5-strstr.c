#include "main.h"
/**
 * _strstr - An entry point function
 * @haystack: parameter (input value)
 * @needle: parameter 2 (input value)
 * Return: zero if successful
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *x = haystack;
		char *y = needle;

		while (*x == *y && *y != '\0')
		{
			x++;
			y++;
		}

		if (*y == '\0')
			return (haystack);
	}

	return (0);
}

