/**
 * print_sign - prints the sign of an integer
 * @n: number to be input
 * Return: Return the sign of the number
 */
#include "main.h"
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if
		(n < 0)
		{
			_putchar('-');
			return (-1);
		}
	else
	{
		_putchar('0');
		return (0);
	}
}
