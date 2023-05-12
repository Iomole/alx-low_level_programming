#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - A function that reads a text-file
 * & prints it to the POSIX standard output.
 * @filename: Parameter for the text-file being read
 * @letters: Parameter for the number of letters to be read
 * Return: n_b for the number of bytes read and printed
 * & zero if function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *b;
	ssize_t x;
	ssize_t n_b;
	ssize_t y;

	x = open(filename, O_RDONLY);
	if (x == -1)
		return (0);
	b = malloc(sizeof(char) * letters);
	y = read(x, b, letters);
	n_b = write(STDOUT_FILENO, b, y);

	free(b);
	close(x);
	return (n_b);
}
