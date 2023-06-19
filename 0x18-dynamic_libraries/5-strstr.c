#include "main.h"

/**
 * _strstr - finds the first occurence of the substring
 * needle in the string haystack
 * @haystack: This is the main string to be scanned
 * @needle: This is the small string to be searched within haystack string
 * Return: a pointer of the first  occurance in haystack of any of
 * the entire sequence of characters specified in haystack
 */

char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		index = 0;

		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);

				index++;

			} while (haystack[index] == needle[index]);
		}

		haystack++;
	}

	return ('\0');
}
