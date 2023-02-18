/**
 * main - entry point
 * Return:Always 0
 */
#include <stdio.h>
#include <ctype.h>
int main(void)
{
	char ch;

	ch = 'a';
	char dh;

	dh = 'A';
	for (ch = 'a'; ch < ('z' + 1); ch++)
	{
		putchar(ch);
	} for (dh = 'A'; dh < ('Z' + 1); dh++)
	{
		putchar(dh);
	}
	putchar('\n');
	return (0);
}
