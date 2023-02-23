#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
	int i;
	/* informs us what is about to happen */
	printf("Infinite loop incoming :(\n");
	i = 0;
	/* this is what is causing the loop */
	while (i < 10)
	{
		/* put break to end the loop */
		/* putchar not needed */
		printf("Infinite loop avoided! \\o/\n");
		break;
	}
	putchar(i);
	return (0);
}
