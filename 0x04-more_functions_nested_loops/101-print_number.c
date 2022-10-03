#include "main.h"

/**
 * print_number- a function that prints an integer
 * @n: the number to be printed
 * Return: Always 0
 */

void print_number(unsigned int n)
{
	unsigned int n1 = 0;

	if (n < 0)
	{
		n1 = -n;
		_putchar('-');
	}

	else 
	{
		n1 = n;
	}

	if (n1 / 10)
	{
		print_number(n1 / 10);
	}

	_putchar((n1 % 10) + '0');
}
