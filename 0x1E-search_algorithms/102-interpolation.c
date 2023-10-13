#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted
 * array using interpolation search.
 * @array: The sorted array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 * Return: If the value is found, the index of the value; otherwise, -1.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t lt = 0, rt = size - 1, pos;
	/*when array is null*/
	if (array == NULL)
		return (-1);
	while (lt <= rt)
	{
		pos = lt + (((double)(rt - lt) / (array[rt] - array[lt])) *
				(value - array[lt]));
		if (pos < size)
			printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		else
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			break;
		}
		if (array[pos] == value)
			return ((int)pos);
		if (array[pos] < value)
			lt = pos + 1;
		else
			rt = pos - 1;
	}
	return (-1);
}
