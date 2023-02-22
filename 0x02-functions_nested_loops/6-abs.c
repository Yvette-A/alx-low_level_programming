/**
 * _abs - computes the absolute value of and integer
 * @x: integer to be tested
 * Return: the absolute value 
 */
#include "main.h"
int _abs(int x)
{
	if ( x < 0)
	{
		_putchar(((x * - 1) % 10) - '0');
	}
	else if
		(x > 0)
		{
			_putchar((x % 10) + '0');
		}
	else
	{
		_putchar('0');
	}
	return (0);
}
