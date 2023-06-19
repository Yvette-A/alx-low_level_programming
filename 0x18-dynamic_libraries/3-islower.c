#include "main.h"
/**
 * _islower - code begins here
 *@c: character input
 * Return: true or false
 */
int _islower(int c)
{
	if (c < 'a' || c > 'z')
		return (0);
	else
		return (1);
}
