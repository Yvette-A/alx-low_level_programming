#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;
	/** cpde starts here */
	if ((a > b && b > c) || (a > c && c > b) || (a > b && b == c)
			|| (a == b && b > c))
	{
		largest = a;
	}
	else if ((b > a && a > c) || (b > c && c > a) || (b > a && a == c))
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
	return (largest);
}
