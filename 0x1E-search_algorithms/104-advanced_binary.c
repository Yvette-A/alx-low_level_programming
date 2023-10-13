#include "search_algos.h"

/**
 * advanced_binary - Searches for a value in a sorted array
 * using advanced binary search.
 * @array: The sorted array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 * Return: If the value is found, the index of the value; otherwise, -1.
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, i, j;
	/*initializing*/
	if (array == NULL || size == 0)
		return (-1);
	while (left <= right)
	{
		i = left + (right - left) / 2;
		printf("Searching in array: %d", array[left]);
		for (j = left + 1; j <= right; j++)
			printf(", %d", array[j]);
		printf("\n");
		if (array[i] == value)
		{
			if (i == left || array[i - 1] != value)
				return ((int)i);
			right = i - 1;
		}
		else if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}
	return (-1);
}

