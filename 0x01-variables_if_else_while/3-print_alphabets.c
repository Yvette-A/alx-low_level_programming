/**
 * main - entry point
 * Return:Always 0
 */
#include <stdio.h>
#include <ctype.h>
int main(void)
{
	char ch, dh;

	ch = 'a';

	dh = 'A';
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (dh <= 'Z')
	{
		putchar(dh);
		dh++;
	}
	putchar('\n');
	return (0);
}
