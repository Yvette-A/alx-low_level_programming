#include "main.h"
/**
 * _islower - code begins here
 *@ch: character input
 * Return: true or false
 */
int _islower(int ch)
{
	if (ch < 'a' || ch > 'z')
		return (0);
	else
		return (1);
}
