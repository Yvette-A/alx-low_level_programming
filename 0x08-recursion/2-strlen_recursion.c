#include "main.h"

/**
 * _strlen_recursion - prints the length of a string
 * @s: the string to find the length
 * Return: Always 0
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}

	return (len);
}
