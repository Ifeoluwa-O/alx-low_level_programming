#include <stdio.h>

/* prints lowercase alphabets, followed by a new line */

/**
 * main - entry point
 * Return: Always 0 (success)
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	putchar(\n);

	return (0);
}

