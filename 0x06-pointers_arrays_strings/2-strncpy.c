#include "main.h"
/**
 * _strncpy - a function that concatenates two strings.
 * @dest: input1
 * @src: input 2
 * @n: input 3
 * Return: values
 */
char *_strncpy(char *dest, char *src, int n)
{
        int m = 0;

        while (m < n && src[m] != '\0')
        {
                dest[m] = src[m];
                m++;
        }

        while (m < n)
        {
                dest[m] = '\0';
                m++;
        }
        return (dest);
}

