#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buff_func(char *f_file);
void closeFile_func(int fd);

/**
 * create_buff_func - Allocates 1024 bytes for a buffer.
 * @f_file: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to the new buffer.
 */
char *create_buff_func(char *f_file)
{
	char *file_buffer;

	file_buffer = malloc(sizeof(char) * 1024);

	if (file_buffer == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n",f_file);
		exit(99);
	}

	return (file_buffer);
}

/**
 * closeFile_func - Closes file descriptors.
 * @d: The file descriptor to be closed.
 */
void closeFile_func(int d)
{
	int r;

	r = close(d);

	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close d %d\n", d);
		exit(100);
	}
}

/**
 * main - This function copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 if successful.
 *
 * Description: If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int frm, to, r, y;
	char *file_buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_buffer = create_buff_func(argv[2]);
	frm = open(argv[1], O_RDONLY);
	r = read(frm, file_buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (frm == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read data from file %s\n", argv[1]);
			free(file_buffer);
			exit(98);
		}

		y = write(to, file_buffer, r);
		if (to == -1 || y == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(file_buffer);
			exit(99);
		}

		r = read(frm, file_buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(file_buffer);
	closeFile_func(frm);
	closeFile_func(to);

	return (0);
}

