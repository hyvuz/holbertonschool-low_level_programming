#include <stdio.h>

/**
 * main - Prints the sum of even Fibonacci numbers below 4,000,000
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long fib1 = 1, fib2 = 2, next, sum = 2;

	while (1)
	{
		next = fib1 + fib2;
		if (next > 4000000)
			break;

		if (next % 2 == 0)
			sum += next;

		fib1 = fib2;
		fib2 = next;
	}

	printf("%lu\n", sum);
	return (0);
}
