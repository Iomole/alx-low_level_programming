#include <stdio.h>
/**
 * main - main function to print 0 to 9
 * Return: return zero for success
 */
int main(void)
{
	int n = 0;

	do {
		putchar(n);
		n++;

	} while (n < 10);
	return (0);
}
