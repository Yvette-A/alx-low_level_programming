#include <stdio.h>

/**
 * main - prints all the arguments it is passed with
 * @argc: the number of arguments
 * @argv: the pointer to the arguments
 * Return: the printed arguments
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
