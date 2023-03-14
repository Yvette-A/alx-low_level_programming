#include <stdlib.h>

/**
 * _strdup - returns a pointer ot a newly allocte memmory in space
 * containing a copy of a given string
 * @str: Thr string to copy and return a pointer of the copied string
 * Return: The pointer to the memmory alloction
 */

char *_strdup(char *str)
{
	int index;
	char *pt;
	int len = 0;

	index = 0;
	if (str == NULL)
		return (NULL);
	for (index = 0; str[index]; index++)
		len++;
	pt = malloc(sizeof(char) * (len + 1));
	if (pt == NULL)
		return (NULL);
	for (index = 0; str[index]; index++)
		pt[index] = str[index];
	pt[len] = '\0';
	return (pt);
}
