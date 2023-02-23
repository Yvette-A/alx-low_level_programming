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
	/* initializing i */
	i = 0;
	/* this is what is causing the loop */
	while (i < 10)
	{
		printf("Infinite loop avoided! \\o/\n");
		/* this break ends the loop */
		break;
	}
	putchar(i);
	return (0);
}
