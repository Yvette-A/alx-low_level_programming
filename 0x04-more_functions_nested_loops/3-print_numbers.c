#include "main.h"

/**
 * print_numbers - prints numbers
 * Return: Always 0
 */

void print_numbers(void)
{
	int c;

	c = 0;
	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
