#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
* main - main function
* Return: return zero
*/
/* betty style doc for function main goes there */
int positive_or_negative(int i)
{

	/* If condition */
	if (i < 0)
	{
	printf("%d is negative",i);
	}
	else if (i > 0)
	{
		printf("%d is positive", i);
	}
	else
		printf("%d is zero", i);
	printf("\n");

	return (i);
}

