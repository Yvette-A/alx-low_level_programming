#include "main.h"

/**
 * print_triangle - print triangle
 * @size: size of the triangle
 * Return: Always 0
 */

void print_triangle(int size)
{
	int x;

	if (size > 0)
	{
		for (x = 1; x <= size; x++)
			_putchar('#');
		if (x == size)
			continue;
	}
	_putchar('\n');
}
