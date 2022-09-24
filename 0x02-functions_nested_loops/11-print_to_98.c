#include "main.h"
#include <studio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: variable number
 * Return: void
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		printf("%d, ", n);
		n++;
		printf("%d\n", 98);
	}
	else if (n > 98)
	{
		printf("%d, ", n);
		n--;
		printf("%d\n", 98);
	}
	else
	{
		printf("%d\n", 98);
	}
}
