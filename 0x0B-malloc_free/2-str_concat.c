#include "main.h"
#include <stdlib.h>
/**
 * str_concat - a function that gets ends of input
 * and add together for size
 * @s1: parameter for input one to concat
 * @s2: parameter for input two to concat
 * Return: concatenate of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *c;
	int x, y;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	x = y = 0;
	while (s1[x] != '\0')
		x++;
	while (s2[y] != '\0')
		y++;
	c = malloc(sizeof(char) * (x + y + 1));

	if (c == NULL)
		return (NULL);
	x = y = 0;
	while (s1[x] != '\0')
	{
		c[x] = s1[x];
		x++;
	}

	while (s2[y] != '\0')
	{
		c[x] = s2[y];
		x++, y++;
	}
	c[x] = '\0';
	return (c);
}

