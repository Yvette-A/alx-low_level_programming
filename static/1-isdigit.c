#include "main.h"

/**
 * _isdigit - prints if the character is digit
 * @ch: digit to be input
 * Return: returns digit
 */

int _isdigit(int ch)
{
	if (ch < '0' || ch > '9')
		return (0);
	else
		return (1);
}
