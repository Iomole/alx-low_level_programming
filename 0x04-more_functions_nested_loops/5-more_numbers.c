#include "main.h"
/**
 * more_numbers - a function that prints 10 times the numbers, from 0 to 14
 * Return: nothing
 */
void more_numbers(void)
{
	int n;
	int m;

	for (n = 0; n < 10; n++)
	{
		for (m = 0; m < 15; m++)
		{
			_putchar(m + '0');
		}
		_putchar('\n');
	}
	_putchar('\n');
}

