#include <stdio.h>

/* prints all single digit numbers of base 10 */

/**
 * main - entry point
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;


	for (i = '0'; i <= '9'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
