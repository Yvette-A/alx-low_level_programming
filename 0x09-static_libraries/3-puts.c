#include "main.h"

/**
 * _puts - prints the characters of a string
 * @str: string to print to stdout
 * Return: always 0
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
