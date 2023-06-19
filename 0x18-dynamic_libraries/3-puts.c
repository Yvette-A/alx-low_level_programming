#include "main.h"

/**
 * _puts - prints the characters of a string
 * @s: string to print to stdout
 * Return: always 0
 */

void _puts(char *s)
{
	while (*s)
		_putchar(*s++);
	_putchar('\n');
}
