#include <stdio.h>
#include "main.h"

/**
 * main - A function that prints all arguments received
 * @argc: parameter for number of arguments
 * @argv: parameter for array of arguments
 *
 * Return: zero successful
 */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}

	return (0);
}

