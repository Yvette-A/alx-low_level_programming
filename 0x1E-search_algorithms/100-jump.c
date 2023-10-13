#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array using jump search.
 * @array: The sorted array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 * Return: If the value is found, the index of the value; otherwise, -1.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t left = 0, right = 0, step;
	/*determine the jump range*/
	if (array == NULL || size == 0)
		return (-1);
	step = sqrt(size);
	while (right < size && array[right] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", right, array[right]);
		left = right;
		right += step;
	}
	right = right < size - 1 ? right : size - 1;
	for (; left < right && array[left] < value; left++)
		printf("Value checked array[%lu] = [%d]\n", left, array[left]);
	printf("Value checked array[%lu] = [%d]\n", left, array[left]);
	if (array[left] == value)
		return ((int)left);
	return (-1);
}
