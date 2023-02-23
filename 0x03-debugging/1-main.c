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
	/*put a comma to make the while statment void */
	{
		putchar(i);
		break;
	}
		printf("Infinite loop avoided! \\o/\n");
		/* voided loop with break */
	return (0);
}
