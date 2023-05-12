#include "main.h"

/**
 * append_text_to_file - A function to appends text
 * at the end of a file.
 * @filename: Parameter to a pointer to the name of the file.
 * @text_content: Parameter o the string to add to the end of the file.
 *
 * Return: - -1 if the function fails/filename = NULL.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Else - 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int a, h, f_length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (f_length = 0; text_content[f_length];)
			f_length++;
	}

	a = open(filename, O_WRONLY | O_APPEND);
	h = write(a, text_content, f_length);

	if (a == -1 || h == -1)
		return (-1);

	close(a);

	return (1);
}

