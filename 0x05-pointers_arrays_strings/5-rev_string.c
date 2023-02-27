#include "main.h"

/**
 * rev_string - reverses string
 * @s: string to be input
 * Return: Always 0
 */

void rev_string(char *s)
{
	int index, len;

	index = 0;
	len = 0;
	for (index = 0; s[index]; index++)
		len++;
	for (index = len - 1; s[index] >= 0; index--)
		
}
