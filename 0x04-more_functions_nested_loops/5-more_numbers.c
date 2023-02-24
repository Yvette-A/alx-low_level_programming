#include "main.h"

/**
 * more_numbers - prints 10 times the numbers
 * Return: Always 0
 */

void more_numbers(void)
{
	int ch, dh;

	dh = 0;

	ch = 0;
	for (dh = 0; dh <= 9; dh++)
	{
		for (ch = 0; ch < 15; ch++)
		{
			if (ch > 9)
			{
				_putchar((ch / 10) + '0');
			}
			_putchar((ch % 10) + '0');
		}
		_putchar('\n');
	}
}
