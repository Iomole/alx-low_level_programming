#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line on the termina
 * @n: parameter
 * Return: zero
 */
void print_diagonal(int n)
{
	int i;
	int m;

	for (i = 0; i < n; i++)
	{
		for (m = 0; m < n; m++)
		{
			if (n <= 0)
				_putchar('\n');
			else
			{
				if (m == i)
				{
					_putchar('\\');
				}
				else if (m < i)
					_putchar(' ');
			}

		}
		_putchar('\n');

	}

}
