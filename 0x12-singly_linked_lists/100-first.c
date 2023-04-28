#include <stdio.h>

void tortoiseBeat(void) __attribute__ ((constructor));

/**
 * toetoiseBeat - A function that prints a sentence before the main
 * function is executed
 */
void tortoiseBeat(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

