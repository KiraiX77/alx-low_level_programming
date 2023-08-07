#include "main.h"

/**
 * append_text_to_file - Appends the text thats at the end of a file.
 * @filename: this is apointer to the name of the file.
 * @text_content: this is the string to add to the end of the file.
 *
 * Return: If there is function failure or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, j, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	j = write(o, text_content, len);

	if (o == -1 || j == -1)
		return (-1);

	close(o);

	return (1);
}
