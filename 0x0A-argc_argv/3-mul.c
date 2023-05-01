#include <stdio.h>
#include "main.h"

/**
 * _conv_str_to_int - A function that  converts
 * a string to an integer
 * @s: parameter for string to be converted
 *
 * Return: the integer converted from the string
 */
int _conv_str_to_int(char *s)
{
	int x, y, z, len, w, digit;

	x = 0;
	y = 0;
	z = 0;
	len = 0;
	w = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (x < len && w == 0)
	{
		if (s[x] == '-')
			++y;

		if (s[x] >= '0' && s[x] <= '9')
		{
			digit = s[x] - '0';
			if (y % 2)
				digit = -digit;
			z = z * 10 + digit;
			w = 1;
			if (s[x + 1] < '0' || s[x + 1] > '9')
				break;
			w = 0;
		}
		x++;
	}

	if (w == 0)
		return (0);

	return (z);
}

/**
 * main - A function to multiply two numbers
 * @argc: parameter for number of arguments
 * @argv: parameter for array of arguments
 *
 * Return: zero if successful,
 * 1 if error
 */
int main(int argc, char *argv[])
{
	int res, n1, n2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	n1 = _conv_str_to_int(argv[1]);
	n2 = _conv_str_to_int(argv[2]);

	res = n1 * n2;

	printf("%d\n", res);

	return (0);
}

