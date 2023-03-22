#include <unistd.h>

/**
 * print_alphabet - writes the alphabet a to z * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet(void);
{
	char n;
	
	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);

	}
	return (0);
}
