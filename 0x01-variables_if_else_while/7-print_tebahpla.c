#include <stdio.h>

/*prints the lowercase alphabet in reverse */

/**
 * main - entry point
 * Return: Always 0 (success)
 */

int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
