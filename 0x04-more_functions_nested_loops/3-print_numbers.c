#include "main.h"
/**
 * print_numbers - a function that prints numbers 0 - 9 flld by new line
 * Return: zero if successful
 */
void print_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
		_putchar(n + '0');
	_putchar('\n');
}
