/**
 * main - entry point
 * Return: always 0
 */
#include <stdio.h>
int main(void)
{
	char ch;

	ch = 'a';
	while
		(ch <= 'z')
	{
		if ((ch != 'q' && ch != 'e') && ch  <= 'z')
			putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
