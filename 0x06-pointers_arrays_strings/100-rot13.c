#include "main.h"
#include <stdio.h>
/**
 * rot13 - a function that encodes a string using rot13.
 * @n: parameter
 * Return: n
 */
char *rot13(char *n)
{
	int l, m;
	char data1[] =
		"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] =
		"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	for (l = 0; n[l] != '\0'; l++)
	{
		for (m = 0; m < 52; m++)
		{
			if (n[l] == data1[m])
			{
				n[l] = datarot[m];
				break;
			}
		}
	}
	return (n);
}
