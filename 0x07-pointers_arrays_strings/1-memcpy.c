#include "main.h"

/**
 * _memcpy - copies n characters from one memory to another memory
 * @dest: the destination of the copied characters
 * @src: the source of the characters to be copied
 * @n: the number of characters to be copied
 * Return: a pointer to the destination;
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *y;
	unsigned int index;

	y = src;
	index = 0;
	for (index = 0; index < n; index++)
		if (index != '\0')
			*y++ = *dest++;
	return (dest);
}