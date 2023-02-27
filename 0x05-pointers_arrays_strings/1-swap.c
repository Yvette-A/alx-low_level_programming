#include "main.h"

/**
 * swap_int - swaps two integers
 * @a: first integer to swap
 * @b: second integer to swap
 * Return: swapped value
 */

void swap_int(int *a, int *b)
{
	/* position of *a is x */
	int x;


	x = *a;
	*a = *b;
	*b = x;
}
