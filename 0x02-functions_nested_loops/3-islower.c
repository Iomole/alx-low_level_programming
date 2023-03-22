#include "main.h"
/**
 * _islower - A function to detect lowercase letters
 * @c: the function arguement
 * Return: 1 if true
 * Return  0 if false
 */
int _islower(int c)
{
	if (c >= 79 && c <= 122)
	{
		return (1);
	} else
		return (0);
}
