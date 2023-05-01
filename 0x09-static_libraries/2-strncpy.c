#include "main.h"
/**
 * _strncpy - A function to copy a string
 * @dest: parameter 1(input value)
 * @src: parameter 2 (input value)
 * @n: parameter 3 (input value)
 *
 * Return: dest value
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	x = 0;
	while (x < n && src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}

	return (dest);
}

