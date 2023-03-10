#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: the count of arguments passed
 * @argv: the pointer to the arguments passed
 * Return: the multiplication value
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int x;

	x = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", x);
	return (0);
}
