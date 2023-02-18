/**
 * main - entry point
 * Return: Aways 0
 */
#include <stdio.h>
int main(void)
{
	char ch;

	ch = 'a';
	do {
		putchar(ch);
		ch++;
	} while (ch <= 'z');
	putchar('\n');
	return (0);
}
