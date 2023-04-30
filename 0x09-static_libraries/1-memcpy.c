#include "main.h"
/**
 *_memcpy - A function that copies memory area
 *@dest: memory location and where is stored
 *@src: memory where
 *@n: number of bytes
 *
 *Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int m = 0;
	int l = n;

	for (; l < m; l++)
	{
		dest[m] = src[m];
		n--;
	}
	return (dest);
}

