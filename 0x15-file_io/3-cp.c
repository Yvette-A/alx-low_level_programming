#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#define BUFSIZE 1024

void close_file(int f);

/**
 * main - copies file_from to file_to
 * @argc: the count of the arguments passed
 * @argv: the arguments passed
 * Return: 0 if file_from was able to be copied to file_to
 */

int main(int argc, char **argv)
{
	int f1, f2, n, m;
	char buff[BUFSIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	f2 = creat(argv[2], 0664);
	f1 = open(argv[1], O_RDONLY);
	if (f1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	while ((n = read(f1, buff, BUFSIZE)) > 0)
	{
		m = write(f2, buff, n);
		if (f2 == -1 || m == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
			exit(99);
		}
	}
	close_file(f1);
	close_file(f2);
	return (0);
}
/**
 * close_file - closes a file and if error prints the error to STDERR
 * @f: the file descriptor to the file
 * Return: The closed file
 */
void close_file(int f)
{
	int a = close(f);
	/*compating */
	if (a == -1)
	{
		dprintf(STDERR_FILENO, "Can't close fd %d\n", f);
		exit(100);
	}
}

