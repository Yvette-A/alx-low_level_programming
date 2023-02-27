#include "main.h"

/**
 * print_rev -prints string in reverse
 * @s: string to print in reverse
 * Return: Always 0
 */

void print_rev(char *s)
{
	int index, length;

	length = 0;
	while (s[index++])
		length++;
	for (index = length - 1; index >= 0; index--)
		_putchar(s[index]);
	_putchar('\n');
}
