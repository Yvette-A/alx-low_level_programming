/**
 * main - entry point
 * Return: Always 0
 */
#include <stdio.h>
int main(void)
{
	char ch, dh;

	ch = '0';

	dh = 'a';

	while
		(ch <= '9')
		{
			putchar(ch);
			ch++;
		}
	while
		(dh <= 'f')
		{
			putchar(dh);
			dh++;
		}
	putchar('\n');
	return (0);
}
