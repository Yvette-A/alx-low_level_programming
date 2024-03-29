#include "main.h"

/**
 * create_file - creates a file and trancates one that already exists
 * @filename: the name of the file to be created if it doesnot exist
 * @text_content: the content to be written in the file created
 * Return: 1 if the creation was successfull
 */

int create_file(const char *filename, char *text_content)
{
	int fd, w, len;

	if (filename == NULL)
		return (-1);
	fd = creat(filename, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
		w = write(fd, text_content, len);
		if (w == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
