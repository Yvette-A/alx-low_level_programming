#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - read the contents of a file and prints it ot standard output
 * @filename: The name of the file the contents are to be fetched from
 * @letters: The number of lettters to be printed and read
 * Return: all the letters that have been read to be printed to stdout
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, r, w;
	char *buff;

	if (filename == NULL)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	r = read(fd, buff, letters);
	w = write(STDOUT_FILENO, buff, r);
	if (fd == -1 || r == -1 || w == -1 || w != r)
	{
		free(buff);
		return (0);
	}
	free(buff);
	close(fd);
	return (w);
}
