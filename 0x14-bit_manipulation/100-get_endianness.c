#include "main.h"

/**
 * get_endianness - checks endianness
 * Return: 1 if little endianess or 0 if big endianness
 */

int get_endianness(void)
{
	int i = 1;
	char *ch = (char *)&i;

	if (*ch == 1)
		return (1);
	return (0);
}
