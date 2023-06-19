/**
 * _isalpha - entry point
 * @c: input character
 * Return: false or true
 */
#include "main.h"
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
