#include <stdio.h>

/* prints lowercase alphabets except q and e */

/**
 * main - entry point
 * Return: Always 0 (success)
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch != 'q' && ch != 'e'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
