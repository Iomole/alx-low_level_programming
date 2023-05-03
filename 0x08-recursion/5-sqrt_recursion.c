#include "main.h"

int actual_sqrt_recursion(int n, int m);

/**
 * _sqrt_recursion - A function that returns the
 * natural square root of a number
 * @n: parameter for number to calculate the square root of
 *
 * Return: result of square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - function that recurses to find the natural
 * square root of a number
 * @n: parameter for number to calculate the sqaure root of
 * @m: parameter for iterator
 *
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int n, int m)
{
	if (m * m > n)
		return (-1);
	if (m * m == n)
		return (m);
	return (actual_sqrt_recursion(n, m + 1));
}

