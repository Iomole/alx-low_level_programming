#include <stdio.h>
/**
 * main - A function to Write a program that prints all
 * the numbers of base 16 in lowercase, followed by a new line.
 * Return: zero if successful
 */
int main(void)
{
	int n;
	char l;

	for (n = 0; n < 10; n++)
		putchar(n + '0');

	for (l = 'a'; l < 'g'; l++)
		putchar(l);
	putchar('\n');
	return (0);
}
