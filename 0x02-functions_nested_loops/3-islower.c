#include "main.h"

/**
 * _islower - checks for lowercase character
 *@c: character variable
 * Return: 1
 */

int _islower(int c)
{
	int c = 97;

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
