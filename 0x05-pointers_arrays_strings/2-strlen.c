#include "main.h"
/**
 * _strlen - a function that returns the length of a string
 * @s: parameter pointer string
 * Return: return length
 */
int _strlen(char *s)
{
	int l_count = 0;

	while (*s != '\0')
	{
		l_count++;
		s++;
	}

	return (l_count);
}
