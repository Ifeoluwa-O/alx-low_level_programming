#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number
 * @n: the number
 * Return: the last digit of n
 */

int print_last_digit(int n)
{
	int lastNum;

	lastNum = n % 10;
	if (lastNum < 0)
		lastNum *= -1;
	_putchar(lastNum + '0');
	return (lastNum);
}
