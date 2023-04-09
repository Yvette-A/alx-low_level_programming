#include "main.h"

/**
 * set_bit - sets bit to 1
 * @n: a pointer to an unsigned long int that the bit needs to be altered
 * @index: the index to set the bit
 * Return: 1 if it was set sucessfully or -1 if not
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n = *n ^ (1 << index);
	return (1);
}
