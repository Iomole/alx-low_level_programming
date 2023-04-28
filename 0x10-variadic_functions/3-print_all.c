#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - A function that prints anything
 * @format: Arguments passed to function
 */
void print_all(const char * const format, ...)
{
	int n = 0;
	char *str, *div = "";

	va_list l;

	va_start(l, format);

	if (format)
	{
		while (format[n])
		{
			switch (format[n])
			{
				case 'c':
					printf("%s%c", div, va_arg(l, int));
					break;
				case 'i':
					printf("%s%d", div, va_arg(l, int));
					break;
				case 'f':
					printf("%s%f", div, va_arg(l, double));
					break;
				case 's':
					str = va_arg(l, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", div, str);
					break;
				default:
					n++;
					continue;
			}
			div = ", ";
			n++;
		}
	}

	printf("\n");
	va_end(l);
}

