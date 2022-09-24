#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: variable number
 * Return: void
 */

void print_to_98(int n)
{
       for (n <= 98; n++)
	{
		while (n < 98)
		{
			printf("%d, ", n);
		}
		if (n == 98);
		{
			printf("%d\n", 98);
		}
	}
	for (n > 98; n--)
	{
		while (n > 98)
		{
			printf("%d, ", n);
		}
		if (n == 98)
		{
			printf("%d\n", 98);
		}
	}
	if (n == 98)
	{
		printf("%d\n", 98);
	}
}
