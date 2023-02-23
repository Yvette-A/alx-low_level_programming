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
	/*break the loop with break*/
	{
		putchar(i);
		break;
	}
	printf("Infinite loop avoided! \\o/\n");
	return (0);
}
