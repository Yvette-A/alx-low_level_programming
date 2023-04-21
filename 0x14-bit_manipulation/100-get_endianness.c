#include "main.h"

/**
 * get_endianness- checks endianness if little or big
 *
 * Return: 0 if big and 1 if little
 */

int get_endianness(void)
{
	unsigned int x = 1;
	char *ch = (char *)&x;

	if (*ch == 1)
		return (1);
	return (0);
}
