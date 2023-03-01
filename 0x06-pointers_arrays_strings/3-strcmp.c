#include "main.h"

/**
 * _strcmp - compares two strngs
 * @s1: first string
 * @s2: second string
 * Return: the value of comparisong
 */

int _strcmp(char *s1, char *s2)
{
	int index, y;
	/* initializing index */
	index = 0;
	y = s1[index] - s2[index];
	for (index = 0; s1[index] == s2[index]; index++)
		if ((s1[index] == s2[index]) && (s1[index] == '\0' || s2[index] == '\0'))
			return (0);
	return (y);
}
