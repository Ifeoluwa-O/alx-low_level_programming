#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c : character variable
 * Return: 1
 */

int _isalpha(int c)
{
	int b;

	if ((b >= 65 && b <= 90) || (b >= 97 && b <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
