#include "main.h"

/**
 * more_numbers - prints numbers from 0 - 14 ten times
 * Return: void
 */

void more_numbers(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		b = 0;
		while (b <= 14)
		{
			if (b >= 10)
			{
				_putchar(b / 10 + '0');
			}
			_putchar(b % 10 + '0');
			b++;
		}
		_putchar('\n');
	}
}
