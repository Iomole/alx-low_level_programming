#include <stdio.h>
/**
 * main - main function
 * Return: zero
 */
int main(void)
{
	char l;
	
	for (l = 'a'; l <= 'z'; l++)
	{
		putchar(l);
	}

	for (l = 'A'; l <= 'Z'; l++)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
