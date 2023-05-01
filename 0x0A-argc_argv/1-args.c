#include <stdio.h>
#include "main.h"

/**
 * main - A program to print the number of arguments
 * passed to the program
 * @argc: parameer 1 - number of arguments
 * @argv: parameter 2 - array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}

