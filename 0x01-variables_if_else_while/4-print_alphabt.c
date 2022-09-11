#include <stdio.h>

/* prints lowercase alphabets except q and e */

/**
 * main - entry point
 * Return: Always 0 (success)
 */

int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'q' && ch != 'e')
			putchar (ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
