#include "main.h"
/**
 * _strncat - A function to concatenate two strings
 * @dest: parameter (input value)
 * @src: parameter (input value)
 * @n: parameter (input value)
 *
 * Return: string (dest)
 */
char *_strncat(char *dest, char *src, int n)
{
	int x;
	int y;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	y = 0;
	while (y < n && src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}

