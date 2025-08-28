#include <stdio.h>

/**
 * print_first_92 - Prints the first 92 Fibonacci numbers
 * @fib1: First number
 * @fib2: Second number
 */
void print_first_92(unsigned long fib1, unsigned long fib2)
{
	int count;
	unsigned long next;

	printf("%lu, %lu", fib1, fib2);

	for (count = 3; count <= 92; count++)
	{
		next = fib1 + fib2;
		printf(", %lu", next);
		fib1 = fib2;
		fib2 = next;
	}
}

/**
 * print_large_fibonacci - Handles Fibonacci numbers larger than 92nd
 * @fib1_high: High part of the first large Fibonacci number
 * @fib1_low: Low part of the first large Fibonacci number
 * @fib2_high: High part of the second large Fibonacci number
 * @fib2_low: Low part of the second large Fibonacci number
 */
void print_large_fibonacci(unsigned long fib1_high, unsigned long fib1_low,
		unsigned long fib2_high, unsigned long fib2_low)
{
	int count;
	unsigned long high, low;
	unsigned long divisor = 10000000000;

	for (count = 93; count <= 98; count++)
	{
		high = fib1_high + fib2_high;
		low = fib1_low + fib2_low;

		if (low >= divisor)
		{
			high++;
			low -= divisor;
		}

		printf(", %lu%010lu", high, low);

		fib1_high = fib2_high;
		fib1_low = fib2_low;
		fib2_high = high;
		fib2_low = low;
	}
}

/**
 * print_fibonacci - Prints the first 98 Fibonacci numbers
 */
void print_fibonacci(void)
{
	unsigned long fib1 = 1, fib2 = 2;
	unsigned long fib1_high, fib1_low, fib2_high, fib2_low;
	unsigned long divisor = 10000000000;

	print_first_92(fib1, fib2);

	fib1_high = fib1 / divisor;
	fib1_low = fib1 % divisor;
	fib2_high = fib2 / divisor;
	fib2_low = fib2 % divisor;

	print_large_fibonacci(fib1_high, fib1_low, fib2_high, fib2_low);

	printf("\n");
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_fibonacci();
	return (0);
}

