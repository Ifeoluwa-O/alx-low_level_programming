#include "main.h"

/**
 * _isdigit - a function that checks for a digit (0 through 9)
 * @c: variable number
 * Return: 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	for (c = '0'; c <= '9'; c++)
	{
		return (1);
	}
	return (0);
}
