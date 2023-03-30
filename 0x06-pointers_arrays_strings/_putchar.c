#include "main.h"
#include <unistd.h>
/**
 * _putchar - write character to the stdout
 * @c: parameter
 * Return: zero
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
