#include "main.h"

/**
 * _strchr - returns the first occurence of the character c in the string s
 * @s: The string from which the character should be returned
 * @c: the character to return
 * Return: a pointer to the character returned
 */

char *_strchr(char *s, char c)
{
	int index;

	index = 0;
	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return ('\0');
}
