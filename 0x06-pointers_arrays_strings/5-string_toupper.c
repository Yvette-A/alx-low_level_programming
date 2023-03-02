#include "main.h"

/**
 * string_toupper - converts string to upper
 * @str: the string to be converted
 * Return: the converted string
 */

char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;

		index++;
	}

	return (str);
}
