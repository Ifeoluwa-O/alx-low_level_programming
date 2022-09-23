#include "main.h"

/**
 * times_table - prints the 9 times table starting with 0
 * Return: void
 */

void times_table(void)
{
	int i, j, multipliedValue;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 10; i++)
		{
			multipliedValue = i * y;
			if (multipliedValue == 0)
			{
				_putchar(multipliedValue + '0');
			}
			else if (multipliedValue >= 10)
			{
				_putchar(' ');
				_putchar(multipliedValue / 10 + '0');
				_putchar(multipliedValue % 10 + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(multipliedValue + '0');
			}
			if (i == 9)
			{
				_putchar('\n');
			}
			else
			{
				_putchar(',');
			}
		}
	}
}
