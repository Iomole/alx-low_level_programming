#include "main.h"

/**
 * _atoi - A function that converts a string
 * into an integer.
 *
 * @s: parameter string.
 *
 * Return: int x  value.
 */

int _atoi(char *s)
{
	int s_value = 1, n = 0;
	unsigned int x = 0;

	while (!(s[n] <= '9' && s[n] >= '0') && s[n] != '\0')
	{
		if (s[n] == '-')
			s_value *= -1;
		n++;
	}
	while (s[n] <= '9' && (s[n] >= '0' && s[n] != '\0'))
	{
		x = (x * 10) + (s[n] - '0');
		n++;
	}
	x *= s_value;
	return (x);
}
