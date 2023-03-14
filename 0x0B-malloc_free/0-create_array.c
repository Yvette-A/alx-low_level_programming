#include <stdlib.h>

/**
 * create_array - creates an a array of characters C
 * @size: the size of the array
 * @c: the characters in the array
 * Return: a pointer to the allocated memmory
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;
	/* return null if size is 0 */
	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);
	for (index = 0; index <= size; index++)
		array[index] = c;
	return (array);
}
