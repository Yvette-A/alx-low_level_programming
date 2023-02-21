#include "main.h"
/**
 * print_alphabet - prints alphabets
 * Return: alphabets in small letters
 */
void print_alphabet(void)
{
	char ch;

	ch = 'a';
	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
