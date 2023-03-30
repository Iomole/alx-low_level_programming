#include "main.h"
/**
 * reverse_array - a function that reverses
 * the content of an array of integers.
 * @a: input
 * @n: input2
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int m;
	int l;

	for (m = 0; m < n--; m++)
	{
		l = a[m];
		a[m] = a[n];
		a[n] = l;
	}
}
