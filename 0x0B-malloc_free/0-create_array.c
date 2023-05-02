#include "main.h"
#include <stdlib.h>
/**
 * create_array - A function that creates array of size
 * and assign char c
 * @size: parameter for size of array
 * @c: parameter for character to assign
 * Description: create array of size size and assign char c
 * Return: pointer to array, NULL if fail
 *
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int x;

	s = malloc(sizeof(char) * size);
	if (size == 0 || s == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
		s[x] = c;
	return (s);
}

