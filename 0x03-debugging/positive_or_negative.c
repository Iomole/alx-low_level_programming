#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
*  positive_or_negative - main function
* Return: return zero
* @i: parameter
*/
/* betty style doc for function main goes there */
void positive_or_negative(int i)
{

	/* If condition */
	if (i < 0)
	{
	printf("%d is negative\n", i);
	}
	else if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else
		printf("%d is zero\n", i);

}

