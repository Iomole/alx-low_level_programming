#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - A program that prints
 * the minimum number of coins to
 * make change for an amount of money
 * @argc: parameter for number of arguments
 * @argv: parmeter for array of arguments
 *
 * Return: zero if successful, 1 if not successful
 */
int main(int argc, char *argv[])
{
	int n, x, res;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);
	res = 0;

	if (n < 0)
	{
		printf("0\n");
		return (0);
	}

	for (x = 0; x < 5 && n >= 0; x++)
	{
		while (n >= coins[x])
		{
			res++;
			n -= coins[x];
		}
	}

	printf("%d\n", res);
	return (0);
}

