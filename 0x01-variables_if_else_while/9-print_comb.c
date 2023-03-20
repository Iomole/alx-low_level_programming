#include <stdio.h>
/**
 * main - Main function to Write a program that
 * prints all possible combinations of single-digit numbers.
 * Return: zero if successful
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
