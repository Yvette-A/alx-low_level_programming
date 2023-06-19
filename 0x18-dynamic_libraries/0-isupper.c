#include "main.h"

/**
 * _isupper - prints the caps of letters
 * @c: input character
 * Return: the character in caps
 */

int _isupper(int c)
{
	if (c < 'A' || c > 'Z')
		return (0);
	else
		return (1);
}
