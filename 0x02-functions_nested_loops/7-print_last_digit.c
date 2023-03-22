#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number.
 * @n: parameter
 * Return: renurns n
 */
int print_last_digit(int n)
{
	int m;

	m = n % 10;
	if (n < 0)
		m = m * -1;
	else
		m = m * 1;
	_putchar(m + '0');
	return (m);
}
