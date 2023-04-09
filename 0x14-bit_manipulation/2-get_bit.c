#include "main.h"

/**
 * get_bit - gets the value of a given bit
 * @n: the value entered so that we can get the value of its said bit
 * @index: the index to get the value of the bit
 * Return: the value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= ((sizeof(unsigned long int) * 8)))
		return (-1);
	if ((n & (1 << index)) == 0)
		return (0);
	else
		return (1);
}
