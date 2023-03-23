#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
* main - main function
* Return: return zero
*/
/* betty style doc for function main goes there */
int positive_or_negative(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* If condition */
	if (n < 0)
	{
	printf("%d is negative", n);
	}
	else if (n > 0)
	{
		printf("%d is positive", n);
	}
	else
		printf("%d is zero", n);
	printf("\n");
	return (0);
}

