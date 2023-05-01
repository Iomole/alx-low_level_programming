#include "main.h"
/**
 * _strlen - A function to returns the length of a string
 * @s: parameter (string)
 * Return: the string length
 */
int _strlen(char *s)
{
	int s_len = 0;

	while (*s != '\0')
	{
		s_len++;
		s++;
	}

	return (s_len);
}

