#include "main.h"

/**
 * create_file -  A function that creates a file.
 * @filename: Parameter for a pointer to the name of the created file.
 * @text_content: Parameter to a pointer
 * that points to a string written to the file.
 *
 * Return: - -1 if the function fails.
 * Else return -1.
 */
int create_file(const char *filename, char *text_content)
{
	int x, n_b, f_length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (f_length = 0; text_content[f_length];)
			f_length++;
	}

	x = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	n_b = write(x, text_content, f_length);

	if (x == -1 || n_b == -1)
		return (-1);

	close(x);

	return (1);
}

