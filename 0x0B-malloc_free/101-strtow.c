#include <stdlib.h>
#include "main.h"

/**
 * count_word - A helper function to count the number of words in a string
 * @s: parameter for string to evaluate
 *
 * Return: number of strings
 */
int count_word(char *s)
{
	int f, a, b;

	f = 0;
	b = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == ' ')
			f = 0;
		else if (f == 0)
		{
			f = 1;
			b++;
		}
	}

	return (b);
}
/**
 * **strtow - A function that splits a string into words
 * @str: parameter for string to split
 *
 * Return: parameter for pointer to an array of strings (Success)
 * or NULL (Not successful)
 */
char **strtow(char *str)
{
	char **mat, *temp;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	mat = (char **) malloc(sizeof(char *) * (words + 1));
	if (mat == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				temp = (char *) malloc(sizeof(char) * (c + 1));
				if (temp == NULL)
					return (NULL);
				while (start < end)
					*temp++ = str[start++];
				*temp = '\0';
				mat[k] = temp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	mat[k] = NULL;

	return (mat);
}

