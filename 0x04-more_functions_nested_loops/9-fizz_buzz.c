#include "main.h"

/**
 * main- a fizzbuzz program
 * Return: 0 (success)
 */

int main(void)
{
	int t;

	for (t = 1; t <= 100; t++)
	{
		if (t % 3 == 0 && t % 5 != 0)
			printf("Fizz");
		else if (t % 3 != 0 && t % 5 == 0)
			printf("Buzz");
		else if (t % 3 == 0 && t % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", t);
		if (t < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
