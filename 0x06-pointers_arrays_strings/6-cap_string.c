#include "main.h"
/**
 * cap_string - a function that capitalizes all words of a string.
 * @n: input
 * Return: n
 */
char *cap_string(char *n)
{
	int m = 0;

	while (n[m])
	{
		while (!(n[m] >= 'a' && n[m] <= 'z'))
		{
			m++;
		}

		if (n[m - 1] == ' ' || n[m - 1] == '\t' || n[m - 1] == '\n'

				|| n[m - 1] == ',' ||
				n[m - 1] == ';' ||
				n[m - 1] == '.' ||
				n[m - 1] == '!' ||
				n[m - 1] == '?' ||
				n[m - 1] == '"' ||
				n[m - 1] == '(' ||
				n[m - 1] == ')' ||
				n[m - 1] == '{' ||
				n[m - 1] == '}' ||
				m == 0)
			n[m] -= 32;
		m++;
	}
	return (n);
}
