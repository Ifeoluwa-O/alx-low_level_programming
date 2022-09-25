#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 * starting with 1 and 2, followed by a new line
 * Return: 0 (success)
 */

int main(void)
{
	int i;
	long int sum = 0, num1 = 0, num2 = 1;

	for (i = 0; i < 98; i++)
	{
		sum = num1 + num2;
		if (i == 97)
			printf("%lu\n", sum);
		else
			printf("%lu, ", sum);
		num1 = num2;
		num2 = sum;
	}
	return (0);
}
