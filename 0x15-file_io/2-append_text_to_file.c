#include "main.h"

/**
 * append_text_to_file - appens text to a file
 * @filename: the file in which text will be appended
 * @text_content: the content which will be appended to the file
 * Return: 1 if successful or -1 if failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int len, fd, w;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	for (len = 0; text_content[len];)
		len++;
	w = write(fd, text_content, len);
	if (fd == -1 || w == -1)
		return (-1);
	close(fd);
	return (1);
}
