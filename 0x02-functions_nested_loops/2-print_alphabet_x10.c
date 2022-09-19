#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 * Retun: void
 */

void print_alphabet_x10(void)
{
	int c, j;

	while (j = 0; j <= 10)
	{
		for (c = 'a'; c < 'z'; c++)
		{
			_putchar(c);
		}
		j++;
	}
	_putchar('\n');
}
