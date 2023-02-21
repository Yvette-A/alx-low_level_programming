#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet 10 times
 * Return: alphabets in small letters
 */
void print_alphabet_x10(void)
{
	char ch;
	int x;

	x = 0;

	ch = 'a';
	for (x = 0; x < 10; x++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
