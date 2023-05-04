#include "main.h"

/**
 * flip_bits - returns the number of bits you need to flip in order
 * to get from one number to another
 * @n: one of the bits that need to be compared
 * @m: the other bits that need to be compared with n inoder for
 * n to be flipped
 * Return: the nuber of bits that need to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int new;
	unsigned int count = 0;

	new = n ^ m;
	while (new != 0)
	{
		if ((new & 1) == 1)
			count++;
		new = new >> 1;
	}
	return (count);
}
