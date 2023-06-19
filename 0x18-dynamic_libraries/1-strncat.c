#include "main.h"

/**
 * _strncat - concatinates atmonst n charracters of src to dest
 * @src: the string to copy
 * @dest: the destination of the string
 * @n: the number of characters to concatinate
 * Return: the destination that is concatinated
 */

char *_strncat(char *dest, char *src, int n)
{
	/* first find the end of dest */
	int index, len;

	index = 0;
	len = 0;
	while (dest[index++])
		len++;
	/* then we add the string to the end of the dest */
	for (index = 0; index < n && src[index] != '\0'; index++)
		dest[len++] = src[index];
	return (dest);
}
