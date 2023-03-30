#include "main.h"
/**
 * _strcmp - Write a function that compares two strings
 * @s1: input1
 * @s2: input2
 * Return: zero
 */
int _strcmp(char *s1, char *s2)
{
	int n = 0;

	while (s1[n] != '\0' && s2[n] != '\0')
	{
		if (s1[n] != s2[n])
		{
			return (s1[n] - s2[n]);
		}
		n++;
	}
	return (0);
}
