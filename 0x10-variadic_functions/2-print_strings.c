#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - A function to print  strings, followed by a new line.
 * @separator: The character to be printed between strings.
 * @n: The number of strings passed to function.
 * @...: A number of strings to be printed.
 *
 * Description: If separator is NULL, it is not printed.
 *             Else  if one of the strings if NULL, is printed instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list v;
	char *str;
	unsigned int x;

	va_start(v, n);

	for (x = 0; x < n; x++)
	{
		str = va_arg(v, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(v);
}

