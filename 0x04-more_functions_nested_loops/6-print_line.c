#include "main.h"

/**
 * print_line - prints a line
 * @n: number of times character to  print
 * Return: Always 0
 */

void print_line(int n)
{
	int a;
	
	a = 1;
	while (a <= n)
	{
		_putchar('_');
		a++;
	}
	_putchar('\n');
}
