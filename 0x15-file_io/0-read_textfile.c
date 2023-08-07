#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- this reads the text file print to STDOUT.
 * @filename: this shows us the text file being read
 * @letters: this is the number of letters to read
 * Return: j- this is the number of bytes read and printed
 *        0 when the filename is NULL or when the function fails.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t j;
	ssize_t i;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	i = read(fd, buf, letters);
	j = write(STDOUT_FILENO, buf, i);

	free(buf);
	close(fd);
	return (j);
}
