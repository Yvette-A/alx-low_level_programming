#include "main.h"

/**
 * print_most_numbers - prints most numbers
 * Return: Always 0
 */

void print_most_numbers(void)
{
	int ch;

	ch = 0;
	for (ch = '0'; ch <= '9'; ch++)
	{
		if (ch == '2' || ch == '4')
			continue;
		_putchar(ch);
	}
	_putchar('\n');
}

