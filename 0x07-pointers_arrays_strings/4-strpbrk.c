#include "main.h"

/**
 * _strpbrk - returns the first character in string s
 * the matches any character in string accept
 * @s: string to be scanned
 * @accept: string containg the characters to match
 * Return: returns a pointer to the character in s that matches the
 * first character in strin accept
 */

char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}

		s++;
	}

	return ('\0');
}
