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
	return (0);
}
