#include "main.h"

/**
 * _strncpy - copys atmost n characters to destination
 * @src: source of the string
 * @dest: destination of the string to copy
 * @n: the number of characters to copy
 * Return: the destination value
 */

char *_strncpy(char *dest, char *src, int n)
{
	/* to copy it means that everything in the destination is overwritten */
	int index, len;

	index = 0;
	len = 0;
	while (src[index++])
		len++;
	for (index = 0; index < n && src[index] != '\0'; index++)
		dest[index] = src[index];
	for (index = len; index < n; index++)
		dest[index] = '\0';
	return (dest);
}
