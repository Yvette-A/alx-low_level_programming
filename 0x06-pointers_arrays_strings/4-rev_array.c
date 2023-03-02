#include "main.h"
/**
 * reverse_array - reverses the array
 * @a: is the array to be reversed
 * @n: the number of elements in the array
 * Return: always 0
 */
void reverse_array(int *a, int n)
{
	int tmp, index;
	/* the code */
	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
