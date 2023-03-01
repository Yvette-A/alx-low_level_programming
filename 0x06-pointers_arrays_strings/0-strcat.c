#include "main.h"

/**
 * _strcat - sticks the source string to the destination string
 * @src: souce string
 * @dest: destination string
 * Return: the strung string
 */

char *_strcat(char *dest, char *src)
{
	int i, len;
	/* inititalizing i and len */
	i = 0;
	len = 0;
	/* find the end of dest */
	while (dest[i++])
		len++;
	/* concatinate src to dest */
	for (i = 0; src[i]; i++)
		dest[len++] = src[i];
	return (dest);
}
