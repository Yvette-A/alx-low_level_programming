/**
 * print_to_98 - prints natural numbers
 * @n: input integer
 * Return: Always 0
 */
#include <stdio.h>
#include "main.h"
void print_to_98(int n)
{
	if (n <= 98)
	{
		printf("%d\n", n);
		n++;
	}
	if (98 <= n)
	{
		printf("%d\n", n);
		n--;
	}
}

