#include <stdio.h>

/*prints all possible combinations of single-digit numbers */

/**
 * main - entry point
 *Return: Always 0 (success)
 */

int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
