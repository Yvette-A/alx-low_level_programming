#include "main.h"

/**
 * _isupper - prints the caps of letters
 * @ch: input character
 * Return: the character in caps
 */

int _isupper(int ch)
{
	if (ch < 'A' || ch > 'Z')
		return (0);
	else
		return (1);
}
