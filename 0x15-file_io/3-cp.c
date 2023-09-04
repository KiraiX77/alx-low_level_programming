#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - this does allocates 1024 bytes for a buffer.
 * @file: refers to the name of the file buffer is storing chars for.
 *
 * Return: this returns a pointer to the newly-allocated buffer.
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
 * close_file - this does close file descriptors.
 * @fd: refers to the file descriptor that will be closed.
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
 * main - this does copie the contents of a file to another file
 * @argc: refers to the number of arguments supplied to the program.
 * @argv: refers to an array of pointers to the arguments.
 *
 * Return: returns 0 on success
 *
 * Description: If the argument count is incorrect show - exit code 97.
 * If file_from does not exist or cannot be read show - exit code 98.
 * If file_to can't be written or created - exit code 99.
 * If file_to or file_from can't be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int from, to, s, v;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	s = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || s == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		v = write(to, buffer, s);
		if (to == -1 || v == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		s = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (s > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
