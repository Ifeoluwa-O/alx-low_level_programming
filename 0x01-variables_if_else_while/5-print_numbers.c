#include <stdio.h>

/* prints all single digit numbers of base 10 */

/**
 * main - entry point
 * Return: Always 0 (success)
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	printf("\n");
	return (0);
}
