#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* variable m gets the modular division which gives us the last digit of n */
	int m = (n % 10);

	if (m < 6 && m != 0)
		printf("Last digit of %d is less than 6 and not 0\n", n);
	else if (m > 5)
		printf("Last digit of %d is greater than 5\n", n);
	else
		printf("Last digit of %d is 0\n", n);
	return (0);
}
