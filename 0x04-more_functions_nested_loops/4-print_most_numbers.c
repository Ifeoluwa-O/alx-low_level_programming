#include "main.h"

/**
 * print_most_numbers - prints the numbers from 0 to 9
 * followed by a new line
 * except 2 and 4
 * Return: void
 */

void print_most_numbers(void)
{
	int a = '0';

	while (a <= '9')
	{
		if (a != '2' && a != '4')
		{
			_putchar(a);
		}
		a++;
	}
	_putchar('\n');
}
