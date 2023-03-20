#include <stdio.h>
/**
 * main - Write a program that prints all possible
 * different combinations of three digits.
 * Return: zero
 */
int main(void)
{
	int n;
	int m = 1;
	int l = 2;
	int k;
	int j;

	for (n = 0; n < 8; n++)
	{
		for (k = m; k < 9; k++)
		{
			for (j = l; j < 10; j++)
			{
				putchar(n + '0');
				putchar(k + '0');
				putchar(j + '0');

				if (n != 7)
				{
					putchar(',');
					putchar(' ');
				}
			}

			l++;
		}

		m++;
	}

	putchar('\n');
	return (0);
}
