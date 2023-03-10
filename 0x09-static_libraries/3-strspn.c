#include "main.h"

/**
 * _strspn - returns the number of characters in string2 that are
 * matching with the ones in string1
 * @s: string to scan
 * @accept: the string with the characters to compare
 * Return: returnns the number of bytes in the initial segment which consist
 * only of the number of bytes in accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				bytes++;
				break;
			}

			else if (accept[index + 1] == '\0')
				return (bytes);
		}

		s++;
	}

	return (bytes);
}
