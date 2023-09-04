#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- this does read text file print to STDOUT
 * @filename: refers to the text file being read
 * @letters: this refers to the number of letters to be read
 * Return: w- refers to actual number of bytes read and printed
 *        returns 0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
