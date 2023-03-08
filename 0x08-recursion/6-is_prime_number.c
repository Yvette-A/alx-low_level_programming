#include "main.h"

/**
 * is_prime_number - finds out if a number is a prime number
 * @n: the number to find out
 * Return: 1 if it is prime or 0 if is not
 */

int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (is_divisible(n, div));
}
