#include <stdio.h>
/**
 * main - the main function to print the alphabet in reverse
 * Return: zer if successful
 */
int main(void)
{
	char l;

	for (l = 'z'; l >= 'a'; l--)
		putchar(l);
	putchar('\n');
	return (0);
}
