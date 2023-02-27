#include "main.h"

/**
 * print_rev -prints string in reverse
 * @s: string to print in reverse
 * Return: Always 0
 */
void print_rev(char *s)
{
	int len, index;

	len = 0;
	index = 0;
	for(index = 0; s[index]; index++)
		len++;
	for ( index = len - 1; index >= 0; index--)
		_putchar(s[index]);
	_putchar('\n');
}
