#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c : character variable
 * Return: 1
 */

int _isalpha(int c)
{
	int c;

	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
