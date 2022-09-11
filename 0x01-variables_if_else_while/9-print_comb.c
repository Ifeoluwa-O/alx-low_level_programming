#include <stdio.h>

/*prints all possible combinations of single-digit numbers */

/**
 * main - entry point
 *Return: Always 0 (success)
 */

int main(void)
{
	int i = '0';

	while (i < '10')
	{
		putchar(i);
		putchar(',');
		putchar(' ');
		i++;
	}
	putchar('\n');
	return (0);
}
