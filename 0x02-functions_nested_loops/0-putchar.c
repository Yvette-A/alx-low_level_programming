/**
 * main - prints the word -putchar
 * Return: Always 0
 */
#include "main.h"
int main(void)
{
	char ch[] = "_putchar\n";
	int n;

	n = 0;
	while
		(ch[n] != '\0')
		{
			_putchar(ch[n]);
			n++;
		}
	return (0);
}
