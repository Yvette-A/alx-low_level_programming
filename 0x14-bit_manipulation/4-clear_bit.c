#include "main.h"

/**
 * clear_bit - sets the bit to 0
 * @n: the pointer to an unsigned int whose bit needs to be cleared
 * @index: the index whose bit needs to be cleared
 * Return: 1 if sucessful cleared or -1 if failed
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n = (*n & ~(1 << index));
	return (1);
}
