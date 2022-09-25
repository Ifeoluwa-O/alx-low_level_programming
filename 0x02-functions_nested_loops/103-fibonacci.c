#include <stdio.h>

/**
 * main - prints the sum of even term values of fibonacci series
 * less than 4,000,000
 * Return: 0 (success)
 */

int main(void)
{
	long int num1, num2, nextNum, sum;

	num1 = 0;
	num2 = 2;
	nextNum = 0;
	sum = 0;

	while (nextNum < 4000000)
	{
		nextNem = num1 + num2;
		if (nextNum % 2 == 0)
		{
			sum += nextNum;
		}
		num1 = num2;
		num2 = nextNum;
	}
	printf("%lu\n", sum);
	return (0);
}
