#include <stdio.h>
/**
 * main - main function to out put  with putchar without char type
 * Return: zero if successful
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		putchar(n + '0');
	putchar('\n');
	return (0);
}
