#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - this does allocate 1024 bytes for a buffer.
 * @file: This is the name of the file that the buffer is storing chars for.
 *
 * Return: this is a pointer to the new allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - to close the file descriptors.
 * @fd: this shows the file descriptor to be closed.
 */
void close_file(int fd)
{
	int b;

	b = close(fd);

	if (b == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - this does copy the contents of a file to another file.
 * @argc: it shows the number of arguments supplied to the program.
 * @argv: represents an array of pointers to the arguments.
 *
 * Return: 0 on success.
 * Description: If the argument count is wrong - exit code 97.
 * If file_from can't be read or doesn't exist - exit code 98.
 * If file_to cannot be written to or made or created - exit code 99.
 * If file_to or file_from can't be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int from, to, k, y;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	k = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || k == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		y = write(to, buffer, k);
		if (to == -1 || y == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		k = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (k > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
