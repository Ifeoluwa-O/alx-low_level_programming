#include "main.h"

/**
 * _isupper - a function that checks for uppercase character
 * @c: variable
 * Return: 1 if c is uppercase, and 0 otherwise
 */

int _isupper(int c)
{
	for (c = 65; c <= 90; c++)
	{
		_putchar("%d", 1);
		return (1);
	}
	for (c = 97; c <= 122; c++)
	{
		_putchar("%d", 0);
		return (0);
	}
