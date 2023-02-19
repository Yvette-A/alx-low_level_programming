/**
 * main - entry point
 * Return: Always 0
 */
#include <stdio.h>
int main(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	putchar('\n');
	return (0);
}
