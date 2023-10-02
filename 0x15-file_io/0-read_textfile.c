#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read a text file and outputs it to the standard output
 * @filename: refers to the text file being read
 * @letters: refers to the number of letters that will be read
 * Return: w- returns the actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t j;
	ssize_t w;
	ssize_t t;

	j = open(filename, O_RDONLY);
	if (j == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(j, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(j);
	return (w);
}
