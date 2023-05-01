#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * numCheck - check  string for digit
 * @str: parameter for array string
 *
 * Return: zero successful
 */
int numCheck(char *str)
{
	/*Declaring variables*/
	unsigned int c;

	c = 0;
	while (c < strlen(str)) /*count string*/

	{
		if (!isdigit(str[c])) /*check if str there are digit*/
		{
			return (0);
		}

		c++;
	}
	return (1);
}

/**
 * main - A function to print the name of the program
 * @argc: parameter to Count arguments
 * @argv: parameter for arguments
 *
 * Return: zero successful
 */

int main(int argc, char *argv[])

{

	/*Declaring variables*/
	int c;
	int strToInt;
	int sum = 0;

	c = 1;
	while (c < argc) /*scans through the whole array*/
	{
		if (numCheck(argv[c]))

		{
			strToInt = atoi(argv[c]); /*atoi --> convert string to int*/
			sum += strToInt;
		}

		/*Condition if one of the number contains symbols that are not digits*/
		else
		{
			printf("Error\n");
			return (1);
		}

		c++;
	}

	printf("%d\n", sum); /*print sum*/

	return (0);
}

