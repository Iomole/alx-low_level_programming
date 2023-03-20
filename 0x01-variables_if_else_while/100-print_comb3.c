#include <stdio.h>
/**
 * main - Write a program that prints
 * all possible different combinations of two digits.
 * Return: zero if successful
 */
int main(void)
{
	int n;
	int m = 1;
	int l;

	for (n = 0; n < 9; n++)
	{

		for (l = m; l < 10; l++)
		{
			putchar(n + '0');
			putchar(l + '0');
			putchar(',');
			putchar(' ');
		}

		m++;
	}
	if (n == 8 && l == 9)
	putchar('\n');
	return (0);
}
