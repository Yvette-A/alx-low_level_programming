#include "search_algos.h"

/**
 * exponential_search - Searches for a value in a
 * sorted array using exponential search.
 * @array: The sorted array to search in
 * @size: The number of elements in the array.
 * @value: The value to search for.
 * Return: If the value is found, the index of the value; otherwise, -1.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t left = 0, bound = 1, right, mid, i;
	/*initializing*/
	if (array == NULL)
		return (-1);
	right = (bound < size - 1) ? bound : size - 1;
	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n",
				bound, array[bound]);
		left = bound;
		bound *= 2;
		right = (bound < size - 1) ? bound : size - 1;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", left, right);
	while (left <= right)
	{
		mid = left + (right - left) / 2;
		printf("Searching in array: %d", array[left]);
		for (i = left + 1; i <= right; i++)
			printf(", %d", array[i]);
		printf("\n");
		if (array[mid] == value)
			return ((int)mid);
		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
