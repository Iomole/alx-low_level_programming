#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - A function that
 * returns the sum of all its paramters.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate sum of.
 *
 * Return: If n is equal to  0 - 0.
 * else,- the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list j;
	unsigned int k, sum = 0;

	va_start(j, n);

	for (k = 0; k < n; k++)
		sum += va_arg(j, int);

	va_end(j);

	return (sum);
}

