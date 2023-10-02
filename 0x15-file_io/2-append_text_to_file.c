#include "main.h"

/**
 * append_text_to_file - Adds text to the end of a file
 * @filename: refers to A pointer to the name of the file.
 * @text_content: represents the string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
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
