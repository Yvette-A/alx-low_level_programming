#include <stdlib.h>

/**
 * str_concat - concanates two strings together
 * @s1: the first string to concanate
 * @s2: the second string to concanate
 * Return: the pointer to the location of the concanated string
 */

char *str_concat(char *s1, char *s2)
{
	int index = 0, len1 = 0, len2 = 0, index2 = 0;
	char *pr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (index = 0; s1[index]; index++)
		len1++;
	for (index = 0; s2[index]; index++)
		len2++;
	pr = malloc(sizeof(char) * (len1 + len2 + 1));
	if (pr == NULL)
		return (NULL);
	for (index = 0; s1[index]; index++)
		pr[index2++] = s1[index];
	for (index = 0; s2[index]; index++)
		pr[index2++] = s2[index];
	return (pr);
}
