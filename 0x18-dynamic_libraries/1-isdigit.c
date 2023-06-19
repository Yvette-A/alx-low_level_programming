#include "main.h"

/**
 * _isdigit - prints if the character is digit
 * @c: digit to be input
 * Return: returns digit
 */

int _isdigit(int c)
{
	if (c < '0' || c > '9')
		return (0);
	else
		return (1);
}
