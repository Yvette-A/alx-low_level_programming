#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointer to a string of 1s and 0s
 * Return: a pointer to converted unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, mul = 1;
	int length;
	/* To check if the string is empty */
	if (*b == '\0')
		return (0);
	/* Iterating through the string to find the length */
	for (length = 0; b[length];)
		length++;
	/* Iterating backwards to find the position of 1 */
	for (length -= 1; length >= 0; length--)
	{
		if (b[length] != '0' && b[length] != '1')
			return (0);

		num += (b[length] - '0') * mul;
		mul *= 2;
	}

	return (num);
}
