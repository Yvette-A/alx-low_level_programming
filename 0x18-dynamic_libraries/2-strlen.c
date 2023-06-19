#include "main.h"

/**
 * _strlen - prints the length of th string
 * @s: string to be input
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int x;
	int length;

	x = 0;
	length = 0;
	for (x = 0; s[x]; x++)
		length++;
	return (length);
}
