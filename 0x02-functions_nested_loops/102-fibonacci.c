#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers
 * Return: 0 (success)
 */

int main(void)
{
	int i;
	long int num1, num2, nextNum;

	num1 = 0;
	num2 = 1;
	for (i = 0; i < 50; i++)
	{
		nextNum = num1 + num2;
		if (i == 49)
			printf("%lu\n", nextNum);
		else
			printf("%lu, ", nextNum);
		num1 = num2;
		num2 = nextNum;
	}
	return (0);
}
