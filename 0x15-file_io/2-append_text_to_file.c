#include "main.h"

/**
 * append_text_to_file - Adds text to the end of a file
 * @filename: refers to a pointer to the name of the file
 * @text_content: represents the string to add to the end
 *
 * Return: return -1 If the function fails or filename is NULL .
 *         1 If the file does not exist the user lacks write permissions .
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int p, r, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	p = open(filename, O_WRONLY | O_APPEND);
	r = write(o, text_content, len);

	if (p == -1 || r == -1)
		return (-1);

	close(p);

	return (1);
}
