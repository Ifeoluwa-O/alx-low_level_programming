#include "main.h"

/**
 * _islower - checks for lowercase character
 *@c: character variable
 * Return: 1
 */

int _islower(int c)
{
	int c = 'a';

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
