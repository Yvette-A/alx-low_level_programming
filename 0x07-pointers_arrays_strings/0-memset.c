#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to a location
 * @b: a constant to fill the memory
 * @n: the first number of bites of memory area pointed
 * Return: a pointer to the memory s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *y;
	unsigned int index;

	y = s;
	index = 0;
	/* to get the number of n bytes */
	for (index = 0; index < n; index++)
		*y++ = b;
	return (s);
}
