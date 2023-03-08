#include "main.h"

/**
 * _pow_recursion - the turns the value of x raised to the power y
 * @x: the number to find the square
 * @y: the power of which to raise x
 * Return: the value of x raised to the power y
 */

int _pow_recursion(int x, int y)
{
	int result = x;

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	result *= _pow_recursion(x, y - 1);

	return (result);
}
