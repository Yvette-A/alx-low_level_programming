#include "main.h"
/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointer to a string of 1s and 0s
 * Return: a pointer to converted unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	int mul = 1, length = 0, i;
	unsigned int num = 0;
	/*To check if the string is empty */
	if (*b == '\0')
		return (0);
	/*iterating through the string to find the length */
	for (length = 0; b[length]; length++)
		if (b[length] != '0' && b[length] != '1')
			return (0);
	/* iterating backward to find the position of 1 */
	for (i = (length - 1); i >= 0; i--)
	{
		if (b[i] == '1')
			num +=  mul;
		mul *= 2;
	}
	return (num);
}
