#include "main.h"

/**
 * append_text_to_file - this does append text at the end of a file.
 * @filename: represents a pointer to the name of the file.
 * @text_content: refers to the string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL return - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise return - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int j, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	j = open(filename, O_WRONLY | O_APPEND);
	w = write(j, text_content, len);

	if (j == -1 || w == -1)
		return (-1);

	close(j);

	return (1);
}
